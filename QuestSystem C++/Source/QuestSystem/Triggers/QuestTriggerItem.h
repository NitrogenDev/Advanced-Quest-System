#pragma once
#include "QuestTriggerMaster.h"
#include "QuestTriggerItem.generated.h"

UCLASS(BlueprintType, Blueprintable)
class AQuestTriggerItem : public AQuestTriggerMaster
{
    GENERATED_BODY()

public:
    virtual void Interact_Implementation() override;
};
