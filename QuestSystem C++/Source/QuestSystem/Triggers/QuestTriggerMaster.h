// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestSystem/QuestStep.h"
#include "QuestSystem/Components/QuestComponent.h"
#include "QuestSystem/NPC/NPCQuest.h"

#include "QuestTriggerMaster.generated.h"

UCLASS()
class QUESTSYSTEM_API AQuestTriggerMaster : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AQuestTriggerMaster();

    UFUNCTION(BlueprintCallable)
    bool FinishStep();

protected:
    UPROPERTY(BlueprintReadWrite)
    FString QuestName;
    UPROPERTY(BlueprintReadWrite)
    ANPCQuest* OwnerNPC;
    UPROPERTY(BlueprintReadWrite)
    FQuestStep Step;
    UPROPERTY(BlueprintReadWrite)
    UQuestComponent* QuestComponent;
};
