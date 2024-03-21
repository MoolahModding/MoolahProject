#include "SBZCableComponent.h"

void USBZCableComponent::UpdateSegmentCount(const float InCableLength, const float SegmentLength, const int32 MaxSegmentCount) {
}

void USBZCableComponent::ResetCollisionPlanes() {
}

void USBZCableComponent::ResetCable() {
}

void USBZCableComponent::ResetAttachPoints() {
}

void USBZCableComponent::AddDisplacementForce(FVector DisplacementForceLocation, float DisplacementForce, float DisplacementForceRadius) {
}

void USBZCableComponent::AddCollisionPlane(const FSBZCableCollisionPlane& CollisionPlane) {
}

USBZCableComponent::USBZCableComponent() {
    this->WindSource = NULL;
    this->bAffectedByWind = false;
    this->WindScale = 1.00f;
    this->WindGustFrequency = 1.00f;
    this->bEnableCollisionPlane = false;
    this->bAutoComputeCableLength = false;
}

