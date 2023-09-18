#include "SBZBagPersistentData.h"

FSBZBagPersistentData::FSBZBagPersistentData() {
    this->Secured = false;
    this->CurrentActor = NULL;
    this->LastClaimedByPlayer = NULL;
    this->ServerTimeAtFirstPickup = 0.00f;
}

