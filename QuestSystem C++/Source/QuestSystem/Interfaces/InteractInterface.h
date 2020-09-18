#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE()
class QUESTSYSTEM_API UInteractInterface : public UInterface
{
    GENERATED_BODY()
};

class QUESTSYSTEM_API IInteractInterface
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact();
};
