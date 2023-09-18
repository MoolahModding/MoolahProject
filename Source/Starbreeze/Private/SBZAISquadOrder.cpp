#include "SBZAISquadOrder.h"
#include "ESBZAIBehaviorCategory.h"

USBZAISquadOrder::USBZAISquadOrder() {
    this->SpawnWeight = 0.00f;
    this->OwnerSquad = NULL;
    this->bIsPersistent = true;
    this->Category = ESBZAIBehaviorCategory::Combat;
}


