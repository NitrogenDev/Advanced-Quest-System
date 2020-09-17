#pragma once
#include "QuestTriggerMaster.h"
#include "QuestTriggerLocation.generated.h"

class USphereComponent;
UCLASS(BlueprintType, Blueprintable)
class AQuestTriggerLocation : public AQuestTriggerMaster
{
    GENERATED_BODY()

public:
    AQuestTriggerLocation();

    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
    USphereComponent* Sphere;

    virtual void BeginPlay() override;
};


