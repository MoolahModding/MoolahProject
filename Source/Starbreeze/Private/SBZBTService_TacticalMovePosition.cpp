#include "SBZBTService_TacticalMovePosition.h"

USBZBTService_TacticalMovePosition::USBZBTService_TacticalMovePosition() {
    this->MaxPointDistance = 1000.00f;
    this->AIController = NULL;
    this->TargetEnemy = NULL;
    this->TargetEnemyRoom = NULL;
    this->NodeName = TEXT("TacticalMovePosition");
}


