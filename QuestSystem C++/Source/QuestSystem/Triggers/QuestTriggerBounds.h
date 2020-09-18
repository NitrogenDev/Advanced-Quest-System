#pragma once
#include "QuestTriggerMaster.h"
#include "QuestTriggerBounds.generated.h"

class UBoxComponent;
UCLASS(Blueprintable, BlueprintType)
class AQuestTriggerBounds : public AQuestTriggerMaster
{
    GENERATED_BODY()

public:
    AQuestTriggerBounds();

protected:
    UPROPERTY(EditAnywhere)
    UBoxComponent* Box;

    UFUNCTION()
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    /**
     * If the player leaves this area, add the step back in the array at index 0
     * to force them to get back in the bounds to make progress.
     * Might act funny with bosses that follow the player past them,
     * because the player might be able to kill it outside the bounds.
     * This can be avoided if the boss' movement space is restricted within these bounds.
     */
    UFUNCTION()
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
