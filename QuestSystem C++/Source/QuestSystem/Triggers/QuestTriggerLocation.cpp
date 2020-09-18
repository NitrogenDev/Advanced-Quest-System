#include "QuestTriggerLocation.h"

#include "Components/SphereComponent.h"
#include "NavAreas/NavArea_Obstacle.h"
#include "QuestSystem/ThirdPersonCharacter.h"

AQuestTriggerLocation::AQuestTriggerLocation()
{
    Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    Sphere->InitSphereRadius(385.0F);
    Sphere->AreaClass = UNavArea_Obstacle::StaticClass();
}

void AQuestTriggerLocation::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // Replica of QuestTriggerBounds without re-adding the step
    if (Cast<AThirdPersonCharacter>(OtherActor))
        FinishStep();
}

void AQuestTriggerLocation::BeginPlay()
{
    Sphere->OnComponentBeginOverlap.AddDynamic(this, &AQuestTriggerLocation::BeginOverlap);
}
