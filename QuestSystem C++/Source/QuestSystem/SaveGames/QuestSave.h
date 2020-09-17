// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "QuestSystem/Components/QuestComponent.h"
#include "QuestSystem/NPCQuestHolder.h"

#include "QuestSave.generated.h"

class ANPCQuest;
/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestSave : public USaveGame
{
    GENERATED_BODY()

public:
    static const FString SlotName;

    UFUNCTION(BlueprintCallable)
    void SaveQuestComponent(TArray<FQuestStruct> QuestsToSave, const int QuestID, const bool CanChangeQuest);
    UFUNCTION(BlueprintCallable)
    void SaveNPC(const FString NPCName, FNPCQuestHolder Quests);
    UFUNCTION(BlueprintCallable)
    void LoadNPCQuests(ANPCQuest* NPCQuest);
    UFUNCTION(BlueprintCallable)
    void LoadQuestComponent(UQuestComponent* QuestComponentRef);

private:
    UPROPERTY()
    TMap<FString, FNPCQuestHolder> NPCs;
    UPROPERTY()
    TArray<FQuestStruct>           PlayerQuests;
    UPROPERTY()
    int32                          CurrentQuestID;
    UPROPERTY()
    bool                           bCanChangeQuest;

    void Save();
};
