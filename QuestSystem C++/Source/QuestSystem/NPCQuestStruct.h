#pragma once

#include "CoreMinimal.h"
#include "QuestStep.h"
#include "Engine/DataTable.h"
#include "NPCQuestStruct.generated.h"
struct FQuestStruct;
/**
* 
*/
USTRUCT(BlueprintType)
struct FNPCQuestStruct : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString QuestName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString QuestDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FQuestStep> QuestSteps;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanBeAccepted;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bPrimaryQuest = true;

    FNPCQuestStruct();

    explicit FNPCQuestStruct(const FQuestStruct& QuestStruct);
};
