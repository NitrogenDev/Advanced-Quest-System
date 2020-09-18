// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestSave.h"

#include "Kismet/GameplayStatics.h"
#include "QuestSystem/NPC/NPCQuest.h"

const FString UQuestSave::SlotName = FString("QuestSave");

void UQuestSave::SaveQuestComponent(const TArray<FQuestStruct> QuestsToSave, const int QuestID, const bool CanChangeQuest)
{
    PlayerQuests    = QuestsToSave;
    CurrentQuestID  = QuestID;
    bCanChangeQuest = CanChangeQuest;

    Save();
}

void UQuestSave::SaveNPC(const FString NPCName, FNPCQuestHolder Quests)
{
    FNPCQuestHolder QuestHolder;
    QuestHolder.Quests = Quests.Quests;
    NPCs.Add(NPCName, QuestHolder);
    Save();
}

void UQuestSave::LoadNPCQuests(ANPCQuest* NPCQuest)
{
    if (!NPCs.Num())
        return;

    FNPCQuestHolder* QuestHolder = NPCs.Find(NPCQuest->GetCharacterName());
    if (!QuestHolder)
        return;

    NPCQuest->SetQuests(*QuestHolder);
}

void UQuestSave::LoadQuestComponent(UQuestComponent* QuestComponentRef)
{
    for (FQuestStruct PlayerQuest : PlayerQuests)
        QuestComponentRef->AddQuest(FNPCQuestStruct(PlayerQuest), true);

    if (PlayerQuests.Num())
        QuestComponentRef->SelectQuest(PlayerQuests[0].QuestName);
    QuestComponentRef->SetCanChangeQuest(bCanChangeQuest);
}

void UQuestSave::Save()
{
    UGameplayStatics::SaveGameToSlot(this, SlotName, 0);
}
