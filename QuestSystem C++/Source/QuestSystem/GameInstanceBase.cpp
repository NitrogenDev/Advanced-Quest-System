// Fill out your copyright notice in the Description page of Project Settings.

#include "GameInstanceBase.h"

#include "ThirdPersonCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGames/QuestSave.h"

void UGameInstanceBase::Init()
{
    Super::Init();

    if (UGameplayStatics::DoesSaveGameExist(UQuestSave::SlotName, 0))
    {
        QuestSave = Cast<UQuestSave>(UGameplayStatics::LoadGameFromSlot(UQuestSave::SlotName, 0));
    }
    else
    {
        QuestSave = Cast<UQuestSave>(UGameplayStatics::CreateSaveGameObject(UQuestSave::StaticClass()));

        /**
         * TODO: fix this Delay hell
         * Don't try this at home. The fact, that you have to use delays is a hint, that you have a bad structure
         *
         * If you want to transfer this code to your own game, make sure you create the functionallity to promote the quest to everyone and not this way.
         * THis way is just for a quick and dirty showcase
         */

        FTimerHandle Handle;
        GetWorld()->GetTimerManager().SetTimer(Handle, [this]()
        {
            AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(UGameplayStatics::GetPlayerController(this, 0));
            if (Character)
                QuestSave->SaveQuestComponent(Character->GetQuestComponent()->GetQuests(), 0, true);

            TArray<AActor*> Actors;
            UGameplayStatics::GetAllActorsOfClass(this, ANPCQuest::StaticClass(), Actors);
            for (AActor* Actor : Actors)
            {
                ANPCQuest* AnpcQuest = Cast<ANPCQuest>(Actor);
                QuestSave->SaveNPC(AnpcQuest->GetCharacterName(), AnpcQuest->GetQuests());
            }
        }, 0.0001F, false);
    }
}
