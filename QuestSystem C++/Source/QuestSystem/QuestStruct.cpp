// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestStruct.h"

#include "NPCQuestStruct.h"

FQuestStruct::FQuestStruct(): bStatus(false)
{
}

FQuestStruct::FQuestStruct(const FNPCQuestStruct& Quest)
{
    QuestName        = Quest.QuestName;
    QuestDescription = Quest.QuestDescription;
    QuestSteps       = Quest.QuestSteps;
    bPrimaryQuest    = Quest.bPrimaryQuest;
    bStatus          = false;
}

void FQuestStruct::Clear()
{
    QuestName        = FString("");
    QuestDescription = FString("");
    QuestSteps       = TArray<FQuestStep>();
    bStatus          = false;
    bPrimaryQuest    = false;
}
