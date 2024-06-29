#include "SBZBagPersistentData.h"

FSBZBagPersistentData::FSBZBagPersistentData() {
    this->Secured = false;
    this->CurrentActor = NULL;
    this->LastClaimedByPlayerCharacter = NULL;
    this->LastClaimedByPlayerState = NULL;
    this->ServerTimeAtFirstPickup = 0.00f;
}

