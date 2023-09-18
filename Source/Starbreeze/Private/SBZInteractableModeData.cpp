#include "SBZInteractableModeData.h"

FSBZInteractableModeData::FSBZInteractableModeData() {
    this->Duration = 0.00f;
    this->bIsInputConsumed = false;
    this->bDistanceBreaksInteraction = false;
    this->bIsAllowedInCasing = false;
    this->bIsSignalInteract = false;
    this->bIsIllegal = false;
    this->Priority = 0;
}

