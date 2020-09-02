// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestTriggerMaster.h"

// Sets default values
AQuestTriggerMaster::AQuestTriggerMaster()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
}

bool AQuestTriggerMaster::FinishStep()
{
    return true;
}
