#include "SBZVehicleAudioComponent.h"

USBZVehicleAudioComponent::USBZVehicleAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EngineSoundEvent = NULL;
    this->EngineStopSoundEvent = NULL;
    this->TyreFrictionSoundEvent = NULL;
    this->TyreFrictionStopSoundEvent = NULL;
    this->BrakeSoundEvent = NULL;
    this->BrakeStopSoundEvent = NULL;
    this->CollisionTiresSoundEvent = NULL;
    this->CollisionBodySoundEvent = NULL;
    this->TireFrictionSoundEvent = NULL;
    this->SignalSoundEvent = NULL;
    this->SignalStopSoundEvent = NULL;
    this->RadioSoundEvent = NULL;
    this->RadioStopSoundEvent = NULL;
    this->HelicopterRotaryBladesSoundEvent = NULL;
    this->HelicopterRotaryBladesStopSoundEvent = NULL;
    this->EngineRTPC = NULL;
    this->CollisionTiresRTPC = NULL;
    this->CollisionBodyRTPC = NULL;
    this->FrictionTiresRTPC = NULL;
    this->HelicopterRotaryBladesRTPC = NULL;
    this->EngineSoundMultiplicationValue = 0.01f;
    this->BrakeSoundMultiplicationValue = 0.01f;
    this->TyreSoundMultiplicationValue = 0.01f;
    this->BladeSoundMultiplicationValue = 0.01f;
}

void USBZVehicleAudioComponent::StopTyreFrictionSound() {
}

void USBZVehicleAudioComponent::StopEngineSound() {
}

void USBZVehicleAudioComponent::StopBrakeSound() {
}

void USBZVehicleAudioComponent::SetTyreFriction(float FrictionSpeedValue) {
}

void USBZVehicleAudioComponent::SetTyreCollisionImpact(float CollisionSpeedValue) {
}

void USBZVehicleAudioComponent::SetHelicopterVehicleEngineSpeed(float EngineValue, float BladeValue) {
}

void USBZVehicleAudioComponent::SetCarVehicleEngineSpeed(float EngineValue) {
}

void USBZVehicleAudioComponent::SetBodyCollisionImpact(float CollisionSpeedValue) {
}

void USBZVehicleAudioComponent::PlayVehicleRadioSounds(bool bValue) {
}

void USBZVehicleAudioComponent::PlayVehicleHornSounds() {
}

void USBZVehicleAudioComponent::PlayVehicleCollisionSounds(float CollisionValue) {
}

void USBZVehicleAudioComponent::PlayTyreFrictionSound(float EngineValue) {
}

void USBZVehicleAudioComponent::PlayTireCollisionSounds(float CollisionValue) {
}

void USBZVehicleAudioComponent::PlayEngineSounds(float EngineValue, float BladeValue) {
}

void USBZVehicleAudioComponent::PlayEngineSound(float EngineValue) {
}

void USBZVehicleAudioComponent::PlayBrakeSound(float BreakDistance) {
}

void USBZVehicleAudioComponent::DisableSounds() {
}


