#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE()
class QUESTSYSTEM_API UInteractInterface : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class QUESTSYSTEM_API IInteractInterface
{
    GENERATED_IINTERFACE_BODY()

    explicit IInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    virtual void Interact()
    {
    };
};
