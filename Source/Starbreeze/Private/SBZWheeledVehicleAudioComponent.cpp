#include "SBZWheeledVehicleAudioComponent.h"

void USBZWheeledVehicleAudioComponent::StopTyreFrictionSound() {
}

void USBZWheeledVehicleAudioComponent::StopSirenSound() {
}

void USBZWheeledVehicleAudioComponent::StopEngineSound() {
}

void USBZWheeledVehicleAudioComponent::StopBreakSound() {
}

void USBZWheeledVehicleAudioComponent::SetVehicleEngineSpeed(float EngineValue) {
}

void USBZWheeledVehicleAudioComponent::SetVehicleBreakIntencity(float EngineValue) {
}

void USBZWheeledVehicleAudioComponent::SetTyreFriction(float FrictionSpeedValue) {
}

void USBZWheeledVehicleAudioComponent::SetTyreCollisionImpact(float CollisionSpeedValue) {
}

void USBZWheeledVehicleAudioComponent::SetBodyCollisionImpact(float CollisionSpeedValue) {
}

void USBZWheeledVehicleAudioComponent::PlayVehicleHornSound() {
}

void USBZWheeledVehicleAudioComponent::PlayVehicleCollisionSound(float CollisionValue) {
}

void USBZWheeledVehicleAudioComponent::PlayTyreFrictionSound(float EngineValue) {
}

void USBZWheeledVehicleAudioComponent::PlayTyreCollisionSound(float CollisionValue) {
}

void USBZWheeledVehicleAudioComponent::PlaySirenSound() {
}

void USBZWheeledVehicleAudioComponent::PlayEngineSound(float EngineValue) {
}

void USBZWheeledVehicleAudioComponent::PlayBreakSound(float BreakDistance) {
}

USBZWheeledVehicleAudioComponent::USBZWheeledVehicleAudioComponent() {
    this->SirenAudioComponent = NULL;
    this->SirenSoundEvent = NULL;
    this->SirenStopSoundEvent = NULL;
    this->EngineSoundEvent = NULL;
    this->EngineStopSoundEvent = NULL;
    this->BrakeSoundEvent = NULL;
    this->BrakeStopSoundEvent = NULL;
    this->CollisionTiresSoundEvent = NULL;
    this->CollisionBodySoundEvent = NULL;
    this->TyreFrictionSoundEvent = NULL;
    this->TyreFrictionStopSoundEvent = NULL;
    this->SignalSoundEvent = NULL;
    this->SignalStopSoundEvent = NULL;
    this->EngineRTPC = NULL;
    this->BrakeRTPC = NULL;
    this->CollisionTiresRTPC = NULL;
    this->CollisionBodyRTPC = NULL;
    this->FrictionTiresRTPC = NULL;
    this->EngineSoundMultiplicationValue = 0.01f;
    this->BrakeSoundMultiplicationValue = 0.01f;
    this->TyreSoundMultiplicationValue = 0.01f;
}

