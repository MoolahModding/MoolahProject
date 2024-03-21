#include "SBZBTTask_MoveTo.h"

USBZBTTask_MoveTo::USBZBTTask_MoveTo() {
    this->bAutoUncrouch = true;
    this->bAutoRun = true;
    this->UncrouchDist = 400.00f;
    this->RunDist = 600.00f;
    this->bOverrideCanRunWhileFocusing = false;
    this->MovementThreshold = 300.00f;
    this->bOffsetPathFromCorners = false;
    this->PartialPathMaxRange = 300.00f;
    this->bCheckPathEndToGoalHeight = false;
    this->MaxPathEndToGoalHeightDistance = 150.00f;
}

