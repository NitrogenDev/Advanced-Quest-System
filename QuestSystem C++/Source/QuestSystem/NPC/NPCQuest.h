// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPCMaster.h"
#include "NPCQuest.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API ANPCQuest : public ANPCMaster
{
    GENERATED_BODY()

public:
    explicit ANPCQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    virtual void Interact() override;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
