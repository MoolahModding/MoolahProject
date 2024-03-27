#include "SBZBTTask_TacticalMovePosition.h"

USBZBTTask_TacticalMovePosition::USBZBTTask_TacticalMovePosition() {
    this->MaxPointDistance = 1000.00f;
    this->AIController = NULL;
    this->Target = NULL;
    this->TargetRoom = NULL;
}

