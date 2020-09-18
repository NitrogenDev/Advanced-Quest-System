// Fill out your copyright notice in the Description page of Project Settings.

#include "NPCQuest.h"

#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "QuestSystem/GameInstanceBase.h"
#include "QuestSystem/ThirdPersonCharacter.h"
#include "QuestSystem/SaveGames/QuestSave.h"
#include "QuestSystem/Triggers/QuestTriggerMaster.h"

ANPCQuest::ANPCQuest()
{
    PrimaryActorTick.bCanEverTick = false;

    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    RootComponent    = CapsuleComponent;

    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    QuestIndicator        = CreateDefaultSubobject<UTimelineComponent>(TEXT("QuestIndicator"));
    Widget                = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));

    SkeletalMeshComponent->SetupAttachment(GetRootComponent());
    Widget->SetupAttachment(GetRootComponent());
    TimelineFloat.BindUFunction(this, FName("TimelineUpdate"));
}

void ANPCQuest::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    if (CharacterName.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("NPC %s doesn't have a name!"), *GetName());
    }
}

void ANPCQuest::Interact_Implementation()
{
    Super::Interact_Implementation();

    // No quests, no response
    if (!Quests.Quests.Num() || !Quests.Quests[0].bCanBeAccepted)
        return;

    AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
    if (!Character)
        return;

    Character->AskForQuest(this);
}

FNPCQuestStruct ANPCQuest::ShiftQuest()
{
    FNPCQuestStruct Quest = Quests.Quests[0];
    Quests.Quests.RemoveAt(0);

    return Quest;
}

void ANPCQuest::BeginPlay()
{
    Super::BeginPlay();

    if (QuestIndicator && WidgetAnimationCurve)
    {
        QuestIndicator->AddInterpFloat(WidgetAnimationCurve, TimelineFloat, FName("Movement"));
        QuestIndicator->SetLooping(true);
        QuestIndicator->Play();
    }

    UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(UGameplayStatics::GetGameInstance(this));
    if (!GameInstanceBase)
        return;

    QuestSave = GameInstanceBase->QuestSave;

    for (FNPCQuestStruct Quest : Quests.Quests)
    {
        for (FQuestStep Step : Quest.QuestSteps)
        {
            if (!Step.Trigger)
            {
                UE_LOG(LogTemp, Error, TEXT("Trigger for Step %s in Quest %s on NPC %s is not valid!"), *Step.Description, *Quest.QuestName, *GetName())
                continue;
            }
            Step.Trigger->SetQuestName(Quest.QuestName);
            Step.Trigger->SetStep(Step);
        }
    }

    QuestSave->LoadNPCQuests(this);
}

void ANPCQuest::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (QuestSave != nullptr)
        QuestSave->SaveNPC(CharacterName, Quests);

    Super::EndPlay(EndPlayReason);
}

void ANPCQuest::TimelineUpdate(const float Movement) const
{
    const bool bHasQuests = Quests.Quests.Num() != 0;
    Widget->SetVisibility(bHasQuests);

    if (!bHasQuests)
        return;

    FRotator      Rotation       = Widget->GetComponentRotation();
    const FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation();
    Rotation.Yaw                 = UKismetMathLibrary::FindLookAtRotation(Widget->GetComponentLocation(), CameraLocation).Yaw;

    Widget->SetWorldRotation(Rotation);

    const FVector DeltaLocation{0.0F, 0.0F, Movement};
    Widget->AddLocalOffset(DeltaLocation);
}
