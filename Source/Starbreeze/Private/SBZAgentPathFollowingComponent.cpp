#include "SBZAgentPathFollowingComponent.h"

USBZAgentPathFollowingComponent::USBZAgentPathFollowingComponent() {
    this->PathFocalDistance = 125.00f;
    this->PathViewFocalDistance = 225.00f;
    this->bUseSplineSteering = true;
    this->bDebugDrawSpline = false;
    this->AgentMovementComp = NULL;
    this->AgentCharacter = NULL;
    this->MaxDistFromPathBeforeInvalidation = 100.00f;
    this->DefaultSteeringDistanceOffset = 25.00f;
    this->TrafficCrossingSteeringDistanceOffset = 150.00f;
    this->MinDistFromTrafficSlotToAlign = 50.00f;
    this->MinDistFromLifeActionSlotToAlign = 50.00f;
    this->CurTrafficNavLink = NULL;
    this->CachedCurrentNavAreaClass = NULL;
    this->CachedCurrentNavAreaClass = NULL;
}


