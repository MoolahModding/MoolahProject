#include "SBZBTService_UpdateEnemy.h"

USBZBTService_UpdateEnemy::USBZBTService_UpdateEnemy() {
    this->NodeName = TEXT("UpdateEnemy");
    this->bRequirePerceivedHostile = true;
    this->TeamStimuliDelay = 5.00f;
    this->bUseDistanceTickThrottle = true;
}


