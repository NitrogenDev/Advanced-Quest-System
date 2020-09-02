#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestSystem/NPCQuestStruct.h"
#include "NPCQuestHolder.generated.h"

USTRUCT(BlueprintType)
struct FNPCQuestHolder : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FNPCQuestStruct> QuestSteps;
};
