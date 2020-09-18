#include "QuestTriggerItem.h"

void AQuestTriggerItem::Interact_Implementation()
{
    Super::Interact_Implementation();

    if (FinishStep())
        Destroy();
}
