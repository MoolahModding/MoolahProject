#include "SBZBTTask_TacticalMovePosition.h"

USBZBTTask_TacticalMovePosition::USBZBTTask_TacticalMovePosition() {
    this->NodeName = TEXT("TacticalMovePosition");
    this->MaxPointDistance = 1000.00f;
    this->bUseNavProjection = false;
    this->AIController = NULL;
    this->Target = NULL;
    this->TargetRoom = NULL;
}


