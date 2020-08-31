// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstanceBase.generated.h"

class UQuestSave;
/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UGameInstanceBase : public UGameInstance
{
    GENERATED_BODY()

public:
    virtual void Init() override;

    UPROPERTY(VisibleAnywhere)
    UQuestSave* QuestSave;
    
};
