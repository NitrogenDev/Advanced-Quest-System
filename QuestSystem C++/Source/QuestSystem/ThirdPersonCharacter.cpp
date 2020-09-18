// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPersonCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGames/QuestSave.h"
#include "Interfaces/InteractInterface.h"

// Sets default values
AThirdPersonCharacter::AThirdPersonCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    // Don't rotate when the controller rotates. Let that just affect the camera.
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw   = false;
    bUseControllerRotationRoll  = false;

    QuestComponent    = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    SpringArm         = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));

    SpringArm->SetupAttachment(GetMesh());
    ThirdPersonCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

    SpringArm->bUsePawnControlRotation                = true;   // Rotate the arm based on the controller
    ThirdPersonCamera->bUsePawnControlRotation        = false;  // Camera does not rotate relative to arm
    GetCharacterMovement()->bOrientRotationToMovement = true;                         // Character moves in the direction of input...	
    GetCharacterMovement()->RotationRate              = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
}

void AThirdPersonCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (!WidgetClass)
    {
        UE_LOG(LogTemp, Error, TEXT("To use the UI, you need to define a class for the HUD"))
        return;
    }

    QuestInterface = CreateWidget<UQuestInterface>(GetWorld()->GetFirstPlayerController(), WidgetClass);
    QuestInterface->SetPlayer(this);
    QuestInterface->AddToViewport();

    QuestInterface->OnAcceptQuest.AddDynamic(this, &AThirdPersonCharacter::AcceptQuest);
}

void AThirdPersonCharacter::JumpInput()
{
    if (bIsUIOpen)
        return;

    Super::Jump();
}

void AThirdPersonCharacter::LookUp(const float AxisValue)
{
    if (bIsUIOpen)
        return;

    // calculate delta for this frame from the AxisValue information
    AddControllerPitchInput(AxisValue * 50 * GetWorld()->GetDeltaSeconds());
}

void AThirdPersonCharacter::Turn(const float AxisValue)
{
    if (bIsUIOpen)
        return;

    // calculate delta for this frame from the AxisValue information
    AddControllerYawInput(AxisValue * 50 * GetWorld()->GetDeltaSeconds());
}

void AThirdPersonCharacter::MoveForward(const float AxisValue)
{
    if (!Controller || AxisValue == 0.0f || bIsUIOpen)
        return;

    // find out which way is forward
    const FRotator Rotation = Controller->GetControlRotation();
    const FRotator YawRotation(0, Rotation.Yaw, 0);

    // get forward vector
    const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
    AddMovementInput(Direction, AxisValue);
}

void AThirdPersonCharacter::MoveRight(const float AxisValue)
{
    if (!Controller || AxisValue == 0.0f || bIsUIOpen)
        return;

    // find out which way is right
    const FRotator Rotation = Controller->GetControlRotation();
    const FRotator YawRotation(0, Rotation.Yaw, 0);

    // get right vector 
    const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
    // add movement in that direction
    AddMovementInput(Direction, AxisValue);
}

// ReSharper disable once CppMemberFunctionMayBeConst
void AThirdPersonCharacter::Interact()
{
    if (bIsUIOpen)
        return;

    /*
     * Shoot line trace 450 units in front of the camera
     */

    FHitResult            Hit;
    FVector               Start = ThirdPersonCamera->GetComponentLocation();
    FVector               End   = Start + ThirdPersonCamera->GetForwardVector() * 450;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    if (!GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
        return;

    AActor* Actor = Hit.GetActor();
    if (Actor->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
        IInteractInterface::Execute_Interact(Actor);
}

void AThirdPersonCharacter::ToggleQuestPanel()
{
    QuestInterface->OpenQuestList(bIsUIOpen);
}

// Called to bind functionality to input
void AThirdPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AThirdPersonCharacter::Interact);
    PlayerInputComponent->BindAction("Quest Panel", IE_Pressed, this, &AThirdPersonCharacter::ToggleQuestPanel);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThirdPersonCharacter::JumpInput);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &AThirdPersonCharacter::StopJumping);

    PlayerInputComponent->BindAxis("MoveForward", this, &AThirdPersonCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AThirdPersonCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &AThirdPersonCharacter::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &AThirdPersonCharacter::LookUp);
}

void AThirdPersonCharacter::AskForQuest(ANPCQuest* NpcQuest)
{
    QuestNpc = NpcQuest;
    QuestInterface->OpenInfo(false, QuestNpc->GetFirstQuest());
}

// ReSharper disable once CppMemberFunctionMayBeConst
void AThirdPersonCharacter::AcceptQuest()
{
    UE_LOG(LogTemp, Warning, TEXT("Accepted"))
    QuestComponent->AddQuest(QuestNpc->ShiftQuest(), false);
}
