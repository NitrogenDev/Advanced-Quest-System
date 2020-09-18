#include "NPCQuestStruct.h"

#include "QuestStruct.h"

FNPCQuestStruct::FNPCQuestStruct(): bCanBeAccepted(false)
{
}

FNPCQuestStruct::FNPCQuestStruct(const FQuestStruct& QuestStruct)
{
    QuestName        = QuestStruct.QuestName;
    QuestDescription = QuestStruct.QuestDescription;
    QuestSteps       = QuestStruct.QuestSteps;
    bCanBeAccepted   = false;
    bPrimaryQuest    = QuestStruct.bPrimaryQuest;
}
