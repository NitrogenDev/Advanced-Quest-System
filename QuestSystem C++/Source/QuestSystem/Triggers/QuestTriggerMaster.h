// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestSystem/QuestStep.h"
#include "QuestSystem/Components/QuestComponent.h"
#include "QuestSystem/NPC/NPCQuest.h"

#include "QuestTriggerMaster.generated.h"

UCLASS(BlueprintType)
class QUESTSYSTEM_API AQuestTriggerMaster : public AActor, public IInteractInterface
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AQuestTriggerMaster();

    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable)
    bool FinishStep();

    FORCEINLINE void SetQuestName(const FString Name) { QuestName = Name; }
    FORCEINLINE void SetStep(const FQuestStep InStep) { Step = InStep; }

protected:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FString QuestName;
    UPROPERTY(BlueprintReadWrite, SaveGame)
    ANPCQuest* OwnerNPC;
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FQuestStep Step;
    UPROPERTY(BlueprintReadWrite)
    UQuestComponent* QuestComponent;
};
