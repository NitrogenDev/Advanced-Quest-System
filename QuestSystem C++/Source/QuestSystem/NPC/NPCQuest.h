// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPCMaster.h"
#include "Components/TimelineComponent.h"
#include "QuestSystem/NPCQuestHolder.h"

#include "NPCQuest.generated.h"

class UCapsuleComponent;
class UWidgetComponent;
class UTimelineComponent;
class UQuestSave;

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API ANPCQuest : public ANPCMaster
{
    GENERATED_BODY()

public:
    ANPCQuest();

    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void Interact_Implementation() override;
    
    FORCEINLINE FString         GetCharacterName() const { return CharacterName; }
    FORCEINLINE FNPCQuestHolder GetQuests() const { return Quests; }
    FORCEINLINE void            SetQuests(FNPCQuestHolder& QuestHolder) { Quests = QuestHolder; }

    FNPCQuestStruct ShiftQuest();
    FNPCQuestStruct GetFirstQuest() const { return Quests.Quests[0]; }

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(EditAnywhere, SaveGame)
    FString CharacterName;
    UPROPERTY(EditAnywhere)
    FNPCQuestHolder Quests;
    UPROPERTY()
    UQuestSave* QuestSave;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UCapsuleComponent* CapsuleComponent;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    USkeletalMeshComponent* SkeletalMeshComponent;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UTimelineComponent* QuestIndicator;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UWidgetComponent* Widget;
    UPROPERTY(EditAnywhere)
    UCurveFloat* WidgetAnimationCurve;

private:

    FOnTimelineFloat TimelineFloat{};
    /**
     * Widget up and down movement.
     * Acts differently when playing the game as a standalone than from the editor.
     */
    UFUNCTION()
    void TimelineUpdate(float Movement) const;
};
