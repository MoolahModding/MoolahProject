#include "SBZAgentAvoidance.h"

FSBZAgentAvoidance::FSBZAgentAvoidance() {
    this->AvoidanceUID = 0;
    this->Timer = 0.00f;
    this->BottleNeckDetectionTimer = 0.00f;
    this->RadiusModifier = 0.00f;
    this->TargetRadiusModifier = 0.00f;
}

