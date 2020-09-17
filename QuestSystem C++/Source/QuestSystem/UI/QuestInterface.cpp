// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestInterface.h"
#include "QuestSystem/ThirdPersonCharacter.h"

void UQuestInterface::OpenInfo_Implementation(bool bClose, FNPCQuestStruct Quest)
{
}

void UQuestInterface::OpenQuestList_Implementation(bool bClose)
{
}

void UQuestInterface::SetPlayer_Implementation(AThirdPersonCharacter* ThirdPersonCharacter)
{
    Player = ThirdPersonCharacter;

    Player->GetQuestComponent()->OnQuestNotification.AddDynamic(this, &UQuestInterface::UpdatePanel);
    Player->GetQuestComponent()->OnStepUpdate.AddDynamic(this, &UQuestInterface::QuestTrackerUpdate);
}

void UQuestInterface::UpdatePanel(bool bCompleted, FString QuestName)
{
    FTimerHandle Handle;
    GetWorld()->GetTimerManager().SetTimer(Handle, [this, QuestName, bCompleted]()
    {
        QuestUpdateHandler(bCompleted, QuestName);
    }, 0.6F, false);
}

void UQuestInterface::QuestTrackerUpdate(const bool bShowAnimation)
{
    if (!Player->GetQuestComponent()->HasActiveQuest() || !bShowAnimation)
        return;

    FQuestStruct ActiveQuest = Player->GetQuestComponent()->GetActiveQuest();

    TrackerFadeHandler(ActiveQuest.QuestName, ActiveQuest.QuestSteps[0].Description);
}

void UQuestInterface::QuestUpdateHandler_Implementation(bool bCompleted, const FString& QuestName)
{
}

void UQuestInterface::TrackerFadeHandler_Implementation(const FString& Name, const FString& Description)
{
}
