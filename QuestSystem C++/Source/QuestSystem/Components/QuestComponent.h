// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestSystem/GameInstanceBase.h"
#include "QuestSystem/QuestStruct.h"
#include "QuestSystem/NPCQuestStruct.h"
#include "QuestComponent.generated.h"

class UQuestSave;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAddedRemovedQuest);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestNotification, bool, bQuestCompleted, FString, QuestName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectQuest, FString, QuestName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStepUpdate, bool, bShowAnimation);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUESTSYSTEM_API UQuestComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UQuestComponent();

    /** Used to update variables */
    UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event Dispatchers")
    FAddedRemovedQuest OnAddedRemovedQuest;
    /** Used for UI to notify the player of quest changes */
    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FQuestNotification OnQuestNotification;
    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FSelectQuest OnSelectQuest;
    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FStepUpdate OnStepUpdate;

    /**
     * Add a new quest to the quests array, call the dispatchers
     * and select a the quest if it's a primary quest
     * (assuming that are primary/secondary quests)
     */
    UFUNCTION(BlueprintCallable)
    void AddQuest(FNPCQuestStruct Quest, const bool bIsLoadedQuest);
    /**
    * Remove the 0 index step (the current step is always the one with index 0), check if there are any more steps: 
    * -> True: remove the quest, select a random quest, set Can Change Quest to true (now that no quest is in progress) and call the dispatchers (the order is important!).
    * -> False: Quest is now in progress, so stop the player from changing the quest, update the cache so the steps are updated and call Completed Step
    */
    UFUNCTION(BlueprintCallable)
    void CompleteStep();
    UFUNCTION(BlueprintCallable)
    void SelectQuest(const FString QuestName);
    /**
     * At the moment, this event is useless as it's
     * used only once (no reason to create an event
     * when you can just paste the code),
     * but if you plan on expanding the API, this will come in handy
     */
    UFUNCTION(BlueprintCallable)
    void RemoveQuest(const FString QuestName);

    UFUNCTION(BlueprintCallable)
    void UpdateCache();

    UFUNCTION(BlueprintPure)
    bool CanChangeQuest() const { return bCanChangeQuest; }

    UFUNCTION(BlueprintCallable)
    void SetCanChangeQuest(const bool bCond) { bCanChangeQuest = bCond; }

    /**
     * Get (a copy) of the current active quest
     */
    UFUNCTION(BlueprintPure)
    FQuestStruct GetActiveQuest() const { return ActiveQuest; }

    /** For encapsulation, we add this method to alter the steps of the active quest */
    void InsertStep(const FQuestStep& Step);

    UFUNCTION(BlueprintPure)
    bool HasActiveQuest() const { return CurrentQuestID != -1; }

    UFUNCTION(BlueprintPure)
    TArray<FQuestStruct> GetQuests() const { return Quests; }

    UFUNCTION(BlueprintPure)
    TMap<FString, FQuestStruct> GetQuestCache() const { return QuestCache; }

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION(BlueprintCallable)
    void ResetCurrentQuest();

private:
    UPROPERTY(VisibleAnywhere)
    FQuestStruct ActiveQuest;
    UPROPERTY()
    UQuestSave*          QuestSave;
    TArray<FQuestStruct> Quests;
    int32                CurrentQuestID = -1;

    /** The Quest Cache is used for quest slots to update the current step text */
    TMap<FString, FQuestStruct> QuestCache;
    /** Stops the player from changing the quest mid-quest */
    bool bCanChangeQuest = true;

    UPROPERTY()
    UGameInstanceBase* GameInstance;
};
