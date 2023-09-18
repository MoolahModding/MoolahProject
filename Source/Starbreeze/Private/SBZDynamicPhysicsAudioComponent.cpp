#include "SBZDynamicPhysicsAudioComponent.h"

USBZDynamicPhysicsAudioComponent::USBZDynamicPhysicsAudioComponent() {
    this->RootComponent = NULL;
    this->RollingStartEvent = NULL;
    this->RollingStopEvent = NULL;
    this->ImpactEvent = NULL;
    this->RollingSpeedRtpc = NULL;
    this->ImpactForceRtpc = NULL;
    this->StartRollingInterpolationTimeInMs = 200.00f;
    this->UpdateRollingInterpolationTimeInMs = 200.00f;
    this->RollingSpeedThreshold = 1.00f;
    this->ImpactForceThreshold = 1.00f;
    this->ImpactForceMultiplicationValue = 1.00f;
    this->RollingSpeedMultiplicationValue = 1.00f;
    this->OwnedSurfaceType = NULL;
}

void USBZDynamicPhysicsAudioComponent::UpdateRollingVelocity(float Value) {
}

void USBZDynamicPhysicsAudioComponent::UpdateImpactVelocity(float Value) {
}

void USBZDynamicPhysicsAudioComponent::StopRollingSound() {
}

void USBZDynamicPhysicsAudioComponent::PlayRollingSound(float Value) {
}

void USBZDynamicPhysicsAudioComponent::PlayImpactSound(float Value) {
}

void USBZDynamicPhysicsAudioComponent::OnDisable() {
}


