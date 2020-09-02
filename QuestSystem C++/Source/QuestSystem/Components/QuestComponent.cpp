// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestComponent.h"

// Sets default values for this component's properties
UQuestComponent::UQuestComponent()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = false;

    // ...
}


// Called when the game starts
void UQuestComponent::BeginPlay()
{
    Super::BeginPlay();

    // ...
}

void UQuestComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}

void UQuestComponent::AddQuest(FNPCQuestStruct Quest, const bool bIsLoadedQuest)
{
}

void UQuestComponent::CompleteQuest()
{
}

void UQuestComponent::SelectQuest(const FString QuestName)
{
}

void UQuestComponent::RemoveQuest(const FString QuestName)
{
}

void UQuestComponent::UpdateCache()
{
}

void UQuestComponent::ResetCurrentQuest()
{
}