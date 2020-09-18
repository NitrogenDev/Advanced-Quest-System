#include "QuestTriggerBounds.h"

#include "Components/BoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"
#include "QuestSystem/ThirdPersonCharacter.h"

AQuestTriggerBounds::AQuestTriggerBounds()
{
    Box            = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    Box->AreaClass = UNavArea_Obstacle::StaticClass();

    Box->OnComponentBeginOverlap.AddDynamic(this, &AQuestTriggerBounds::BeginOverlap);
    Box->OnComponentEndOverlap.AddDynamic(this, &AQuestTriggerBounds::EndOverlap);
}

void AQuestTriggerBounds::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (Cast<AThirdPersonCharacter>(OtherActor))
        FinishStep();
}

// ReSharper disable once CppMemberFunctionMayBeConst
void AQuestTriggerBounds::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(OtherActor);
    if (!Character)
        return;

    FQuestStruct ActiveQuest = Character->GetQuestComponent()->GetActiveQuest();

    if (QuestName != ActiveQuest.QuestName)
        return;
    
    Character->GetQuestComponent()->InsertStep(Step);

    Character->GetQuestComponent()->UpdateCache();
    Character->GetQuestComponent()->OnStepUpdate.Broadcast(false);
}
