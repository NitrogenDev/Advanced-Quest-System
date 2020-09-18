// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "QuestSystem/Interfaces/InteractInterface.h"

#include "NPCMaster.generated.h"

UCLASS()
class QUESTSYSTEM_API ANPCMaster : public APawn, public IInteractInterface
{
    GENERATED_BODY()
public:

    explicit ANPCMaster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
