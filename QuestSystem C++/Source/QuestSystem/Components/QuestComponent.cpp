// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestComponent.h"

#include "Kismet/GameplayStatics.h"
#include "QuestSystem/NPCQuestStruct.h"
#include "QuestSystem/QuestStruct.h"
#include "QuestSystem/GameInstanceBase.h"
#include "QuestSystem/SaveGames/QuestSave.h"

// Sets default values for this component's properties
UQuestComponent::UQuestComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UQuestComponent::BeginPlay()
{
    Super::BeginPlay();

    OnAddedRemovedQuest.AddDynamic(this, &UQuestComponent::UpdateCache);

    GameInstance = Cast<UGameInstanceBase>(UGameplayStatics::GetGameInstance(this));

    if (!GameInstance)
        return;

    QuestSave = GameInstance->QuestSave;

    FTimerHandle Handle;
    GetWorld()->GetTimerManager().SetTimer(Handle, [this]()
    {
        UE_LOG(LogTemp, Warning, TEXT("Timer finished"))
        FTimerHandle Handle;
        GetWorld()->GetTimerManager().SetTimer(Handle, [this]()
        {
            QuestSave->LoadQuestComponent(this);
        }, 0.0001F, false);
    }, 0.0001F, false);
}

void UQuestComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UpdateCache();

    if (QuestSave)
        QuestSave->SaveQuestComponent(Quests, CurrentQuestID, bCanChangeQuest);

    Super::EndPlay(EndPlayReason);
}

void UQuestComponent::AddQuest(const FNPCQuestStruct Quest, const bool bIsLoadedQuest)
{
    const FQuestStruct NewQuest(Quest);
    Quests.Add(NewQuest);

    // Update quest list
    OnAddedRemovedQuest.Broadcast();

    // notify if is loaded quest
    if (!bIsLoadedQuest)
        OnQuestNotification.Broadcast(false, Quest.QuestName);

    if (Quest.bPrimaryQuest && bCanChangeQuest)
        SelectQuest(Quest.QuestName);
}

void UQuestComponent::CompleteStep()
{
    ActiveQuest.QuestSteps.RemoveAt(0);

    if (!ActiveQuest.QuestSteps.Num())
    {
        RemoveQuest(ActiveQuest.QuestName);
    }
    else
    {
        bCanChangeQuest = false;
        UpdateCache();
        OnStepUpdate.Broadcast(true);
    }
}

void UQuestComponent::SelectQuest(const FString QuestName)
{
    // Make sure there are quests, otherwise reset
    if (!Quests.Num())
        ResetCurrentQuest();

    // If we're selecting the same quest as the current one, do nothing
    if (ActiveQuest.QuestName == QuestName)
        return;

    /*
     * If there is no string from the input, select a random quest
     */

    ResetCurrentQuest();
    if (QuestName.IsEmpty())
    {
        CurrentQuestID = 0;
        ActiveQuest    = Quests[0];

        FTimerHandle Handle;
        GetWorld()->GetTimerManager().SetTimer(Handle, [this]()
        {
            OnStepUpdate.Broadcast(true);
        }, 0.7F, false);

        // early return
        return;
    }

    /*
     * Check through all the quests for the input.
     * If it is found, set the current quest ID to the array index,
     * set the Active Quest to the Array Element then break the for each loop,
     * close the gate (if the quest wasn't found, that means
     * the input was incorrect so we'll reset the current quest)
     * and call the Completed Step dispatcher
     */

    for (int32 i = 0; i < Quests.Num(); i++)
    {
        FQuestStruct Quest = Quests[i];
        if (Quest.QuestName == QuestName)
        {
            CurrentQuestID = i;
            ActiveQuest    = Quest;
            FTimerHandle Handle;
            GetWorld()->GetTimerManager().SetTimer(Handle, [this]()
            {
                OnStepUpdate.Broadcast(true);
            }, 0.6F, false);
            break;
        }
    }
}

void UQuestComponent::RemoveQuest(const FString QuestName)
{
    OnQuestNotification.Broadcast(true, QuestName);

    Quests.RemoveAt(CurrentQuestID);

    // Select a random quest
    SelectQuest(FString(""));
    bCanChangeQuest = true;

    OnAddedRemovedQuest.Broadcast();
}

void UQuestComponent::UpdateCache()
{
    // Clear cache
    QuestCache.Empty();

    /*
     * If there is an active quest (Current Quest ID != -1),
     * then update the steps to that quest with the steps from the
     * Active Quest variable and only then update the cache, 
     * in order to have a CORRECT data-wise cache.
     */

    if (CurrentQuestID != -1)
        Quests[CurrentQuestID].QuestSteps = ActiveQuest.QuestSteps;

    for (FQuestStruct QuestStruct : Quests)
        QuestCache.Add(QuestStruct.QuestName, QuestStruct);
}

void UQuestComponent::InsertStep(const FQuestStep& Step)
{
    ActiveQuest.QuestSteps.Insert(Step, 0);
}

void UQuestComponent::ResetCurrentQuest()
{
    ActiveQuest.Clear();
    CurrentQuestID = -1;
    OnStepUpdate.Broadcast(true);
}
