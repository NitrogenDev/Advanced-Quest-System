// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestSystem/NPCQuestStruct.h"

#include "QuestInterface.generated.h"

class AThirdPersonCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAcceptQuest);

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestInterface : public UUserWidget
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event Dispatchers")
    FAcceptQuest OnAcceptQuest;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenQuestList(bool bClose);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenInfo(bool bClose, FNPCQuestStruct Quest);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayer(AThirdPersonCharacter* ThirdPersonCharacter);

protected:
    UPROPERTY(BlueprintReadOnly)
    AThirdPersonCharacter* Player;

    UFUNCTION(BlueprintCallable)
    void UpdatePanel(bool bCompleted, FString QuestName);

    UFUNCTION(BlueprintCallable)
    void QuestTrackerUpdate(bool bShowAnimation);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuestUpdateHandler(bool bCompleted, const FString& QuestName);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TrackerFadeHandler(const FString& Name, const FString& Description);
};
