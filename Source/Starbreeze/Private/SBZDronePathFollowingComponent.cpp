#include "SBZDronePathFollowingComponent.h"

USBZDronePathFollowingComponent::USBZDronePathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookAheadDistance = 30.00f;
    this->PathFocusDistance = 100.00f;
    this->MinPitchLookAheadDistance = 100.00f;
}

void USBZDronePathFollowingComponent::FollowSpline(const USplineComponent* SplineComponent, bool bIsSpawnSpline, bool bIsPathContainingLastPoint) {
}


