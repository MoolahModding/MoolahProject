#include "SBZCableComponent.h"

USBZCableComponent::USBZCableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAffectedByWind = false;
    this->WindScale = 1.00f;
    this->WindGustFrequency = 1.00f;
    this->bEnableCollisionPlane = false;
    this->bAutoComputeCableLength = false;
}

void USBZCableComponent::UpdateSegmentCount(const float InCableLength, const float SegmentLength, const int32 MaxSegmentCount) {
}

void USBZCableComponent::SetWindData(const FSBZWindData& WindData) {
}

void USBZCableComponent::SetStartAttachmentPointRewindSpeed(float WindingSpeed) {
}

void USBZCableComponent::ResetCollisionPlanes() {
}

void USBZCableComponent::ResetCable() {
}

void USBZCableComponent::ResetAttachPoints() {
}

void USBZCableComponent::DeleteAttachmentPoint(const USceneComponent* Component, const FName& SocketName) {
}

void USBZCableComponent::AddDisplacementForce(FVector DisplacementForceLocation, float DisplacementForce, float DisplacementForceRadius) {
}

void USBZCableComponent::AddCollisionPlane(const FSBZCableCollisionPlane& CollisionPlane) {
}

void USBZCableComponent::AddAttachmentPoint(FSBZCablePointAttachment& CablePointAttachment) {
}


