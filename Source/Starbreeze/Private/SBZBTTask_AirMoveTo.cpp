#include "SBZBTTask_AirMoveTo.h"

void USBZBTTask_AirMoveTo::OnPathCompleted(FSBZAirPathQueryResult Result, AAIController* AIController) {
}

USBZBTTask_AirMoveTo::USBZBTTask_AirMoveTo() {
    this->NodesPerUpdate = 3;
    this->DesiredHeightOffset = 150.00f;
    this->MoveGoalActorUpdateDistance = 300.00f;
}

