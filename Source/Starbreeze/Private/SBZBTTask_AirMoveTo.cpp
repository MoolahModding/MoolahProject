#include "SBZBTTask_AirMoveTo.h"

USBZBTTask_AirMoveTo::USBZBTTask_AirMoveTo() {
    this->NodeName = TEXT("AirMoveTo");
    this->NodesPerUpdate = 3;
    this->DesiredHeightOffset = 150.00f;
    this->MoveGoalActorUpdateDistance = 300.00f;
}


