#include "SBZDronePathFollowingComponent.h"

void USBZDronePathFollowingComponent::FollowSpline(const USplineComponent* SplineComponent, bool bIsSpawnSpline, bool bIsPathContainingLastPoint) {
}

USBZDronePathFollowingComponent::USBZDronePathFollowingComponent() {
    this->LookAheadDistance = 30.00f;
    this->PathFocusDistance = 100.00f;
    this->MinPitchLookAheadDistance = 100.00f;
}

