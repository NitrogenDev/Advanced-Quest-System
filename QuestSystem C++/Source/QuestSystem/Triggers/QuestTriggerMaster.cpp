// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestTriggerMaster.h"

#include "Kismet/GameplayStatics.h"
#include "QuestSystem/ThirdPersonCharacter.h"

// Sets default values
AQuestTriggerMaster::AQuestTriggerMaster()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
}

void AQuestTriggerMaster::BeginPlay()
{
    Super::BeginPlay();

    AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
    if (!Character)
        return;

    QuestComponent = Character->GetQuestComponent();
}

bool AQuestTriggerMaster::FinishStep()
{
    const FQuestStruct ActiveQuest = QuestComponent->GetActiveQuest();

    if (!ActiveQuest.QuestSteps.Num() || QuestName != ActiveQuest.QuestName || ActiveQuest.QuestSteps[0].Trigger != this)
        return false;

    QuestComponent->CompleteStep();

    return true;
}
