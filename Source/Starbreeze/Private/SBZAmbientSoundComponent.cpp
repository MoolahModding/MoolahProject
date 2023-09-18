#include "SBZAmbientSoundComponent.h"

USBZAmbientSoundComponent::USBZAmbientSoundComponent() {
    this->AkAudioEvent = NULL;
    this->AmbientAkComponent = NULL;
    this->bIsSoundComponentEnabled = true;
    this->ActiveAreaAttenuationScale = 1.00f;
    this->DefaultAttenuation = 1000.00f;
    this->bUseDefaultAttenuation = false;
    this->bHasEndpoints = false;
    this->AttenuationSquared = 0.00f;
}

void USBZAmbientSoundComponent::SetSwitchState(const UAkSwitchValue* SwitchValue, const FString& InSwitchGroup, const FString& InSwitchState) {
}

void USBZAmbientSoundComponent::SetRTPCValue(UAkRtpc* InRtpc, float Value, int32 InterpolationTime) {
}

void USBZAmbientSoundComponent::SetAudioEvent(UAkAudioEvent* InAkAudioEvent) {
}

bool USBZAmbientSoundComponent::IsAmbientSoundComponentEnabled() const {
    return false;
}

float USBZAmbientSoundComponent::GetAttenuation() const {
    return 0.0f;
}

void USBZAmbientSoundComponent::EnableAmbientSoundComponent() {
}

void USBZAmbientSoundComponent::DisableAmbientSoundComponent(UAkAudioEvent* AkAudioCloseEvent, const FString& NewEventName) {
}


