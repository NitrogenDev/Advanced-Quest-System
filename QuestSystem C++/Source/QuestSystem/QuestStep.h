#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestStep.generated.h"

class AQuestTriggerMaster;
/**
* 
*/
USTRUCT(BlueprintType)
struct FQuestStep : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AQuestTriggerMaster* Trigger;
};
