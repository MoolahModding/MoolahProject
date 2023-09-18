#include "SBZBTTask_CoverInFear.h"

USBZBTTask_CoverInFear::USBZBTTask_CoverInFear() {
    this->MaxDistFromEnemyToReact = 1000.00f;
    this->DistFromEnemyToForceCrouch = 100.00f;
    this->CrouchBySoundRadius = 150.00f;
    this->BulletDetectionRadius = 200.00f;
    this->NodeName = TEXT("Cover In Fear");
}


