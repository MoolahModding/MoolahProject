#include "SBZAerialVehicleAudioComponent.h"

void USBZAerialVehicleAudioComponent::StopEngineSound() {
}

void USBZAerialVehicleAudioComponent::SetVehicleEngineSpeed(float EngineValue) {
}

void USBZAerialVehicleAudioComponent::SetTyreCollisionImpact(float CollisionSpeedValue) {
}

void USBZAerialVehicleAudioComponent::SetBodyCollisionImpact(float CollisionSpeedValue) {
}

void USBZAerialVehicleAudioComponent::PlayVehicleRadioSound(bool bValue) {
}

void USBZAerialVehicleAudioComponent::PlayVehicleCollisionSound(float CollisionValue) {
}

void USBZAerialVehicleAudioComponent::PlayTyreCollisionSound(float CollisionValue) {
}

void USBZAerialVehicleAudioComponent::PlaySpotlightSound(bool bValue) {
}

void USBZAerialVehicleAudioComponent::PlayEngineSound(float EngineValue) {
}

void USBZAerialVehicleAudioComponent::DisableSounds() {
}

USBZAerialVehicleAudioComponent::USBZAerialVehicleAudioComponent() {
    this->EngineSoundEvent = NULL;
    this->EngineStopSoundEvent = NULL;
    this->CollisionTyresSoundEvent = NULL;
    this->CollisionBodySoundEvent = NULL;
    this->RadioSoundEvent = NULL;
    this->RadioStopSoundEvent = NULL;
    this->SpotlightOnSoundEvent = NULL;
    this->SpotlightOffSoundEvent = NULL;
    this->EngineRTPC = NULL;
    this->CollisionTyresRTPC = NULL;
    this->CollisionBodyRTPC = NULL;
    this->EngineSoundMultiplicationValue = 0.01f;
    this->TyreSoundMultiplicationValue = 0.01f;
}

