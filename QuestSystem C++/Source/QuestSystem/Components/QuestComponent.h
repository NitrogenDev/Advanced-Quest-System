// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestSystem/NPCQuestStruct.h"
#include "QuestSystem/QuestStruct.h"
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

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION(BlueprintCallable)
    void UpdateCache();
    UFUNCTION(BlueprintCallable)
    void ResetCurrentQuest();

public:

    UFUNCTION(BlueprintCallable)
    void AddQuest(FNPCQuestStruct Quest, const bool bIsLoadedQuest);
    UFUNCTION(BlueprintCallable)
    void CompleteQuest();
    UFUNCTION(BlueprintCallable)
    void SelectQuest(const FString QuestName);
    UFUNCTION(BlueprintCallable)
    void RemoveQuest(const FString QuestName);

    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FAddedRemovedQuest OnAddedRemovedQuest;
    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FQuestNotification OnQuestNotification;
    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FSelectQuest OnSelectQuest;
    UPROPERTY(BlueprintAssignable, Category = "Event Dispatchers")
    FStepUpdate OnStepUpdate;

private:

    UPROPERTY()
    UQuestSave*                 QuestSave;
    TArray<FQuestStruct>        Quests;
    int32                       CurrentQuestID;
    FQuestStruct                ActiveQuest;
    TMap<FString, FQuestStruct> QuestCache;
    bool                        bCanChangeQuest;
};
