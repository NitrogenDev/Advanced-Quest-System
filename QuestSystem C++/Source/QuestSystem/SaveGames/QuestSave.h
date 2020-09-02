// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "QuestSystem/NPCQuestStruct.h"
#include "QuestSystem/QuestStruct.h"
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
    UFUNCTION(BlueprintCallable)
    void SaveQuestComponent(TArray<FQuestStruct> QuestsToSave, const int QuestID, const bool CanChangeQuest);
    UFUNCTION(BlueprintCallable)
    void SaveNPC(const FString NPCName, TArray<FNPCQuestStruct> Quests);
    UFUNCTION(BlueprintCallable)
    void LoadNPCQuests(const ANPCQuest* NPCQuest, TArray<FNPCQuestStruct> Quests);
    UFUNCTION(BlueprintCallable)
    void LoadQuestComponent(UQuestComponent* QuestComponentRef);

private:
    TMap<FString, FNPCQuestHolder> NPCs;
    TArray<FQuestStruct>           PlayerQuests;
    int32                          CurrentQuestID;
    bool                           bCanChangeQuest;
};
