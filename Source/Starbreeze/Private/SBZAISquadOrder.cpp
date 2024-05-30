#include "SBZAISquadOrder.h"
#include "ESBZAIBehaviorCategory.h"

USBZAISquadOrder::USBZAISquadOrder() {
    this->bIsPersistent = true;
    this->Category = ESBZAIBehaviorCategory::Combat;
    this->SpawnWeight = 0.00f;
    this->OwnerSquad = NULL;
}


