#include "SBZBTTask_RunMoveToBehavior.h"

USBZBTTask_RunMoveToBehavior::USBZBTTask_RunMoveToBehavior() {
    this->AcceptableRadius = 10.00f;
    this->FilterClass = NULL;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = false;
    this->PartialPathMaxRange = 300.00f;
    this->bTrackMovingGoal = false;
    this->bProjectGoalLocation = false;
    this->bReachTestIncludesAgentRadius = false;
    this->bReachTestIncludesGoalRadius = false;
    this->bOffsetPathFromCorners = false;
}


