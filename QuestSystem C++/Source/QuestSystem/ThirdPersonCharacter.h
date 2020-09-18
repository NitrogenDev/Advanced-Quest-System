// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/QuestComponent.h"
#include "GameFramework/Character.h"
#include "NPC/NPCQuest.h"
#include "UI/QuestInterface.h"

#include "ThirdPersonCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
UCLASS()
class QUESTSYSTEM_API AThirdPersonCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AThirdPersonCharacter();

    UPROPERTY(BlueprintReadWrite)
    bool bIsUIOpen;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UFUNCTION(BlueprintCallable)
    void AskForQuest(ANPCQuest* NpcQuest);
    /**
     * We always accept the first quest in the array.
     * This is a bit limited as you have to pay attention to the order of the quests,
     * but can easily be expanded upon with an UI to let the player
     * choose the quest and some changes to the dispatcher Accept Quest.
     */
    UFUNCTION(BlueprintCallable)
    void AcceptQuest();

    UFUNCTION(BlueprintPure)
    FORCEINLINE UQuestComponent* GetQuestComponent() const { return QuestComponent; };

protected:
    UPROPERTY()
    ANPCQuest* QuestNpc;
    /** Class of the blueprint widget. We need to create a bluerint to have the full power of the editor */
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UQuestInterface> WidgetClass;

    UPROPERTY()
    UQuestInterface* QuestInterface;

    /** Camera boom positioning the camera behind the character */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    USpringArmComponent* SpringArm;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UCameraComponent* ThirdPersonCamera;

    virtual void BeginPlay() override;

    UFUNCTION()
    void JumpInput();
    UFUNCTION()
    void LookUp(float AxisValue);
    UFUNCTION()
    void Turn(float AxisValue);
    UFUNCTION()
    void MoveForward(float AxisValue);
    UFUNCTION()
    void MoveRight(float AxisValue);
    UFUNCTION(BlueprintCallable)
    void Interact();
    UFUNCTION(BlueprintCallable)
    void ToggleQuestPanel();

    UPROPERTY(EditAnywhere)
    UQuestComponent* QuestComponent;
};
