#include "SBZHoldOutDroneVoiceComponent.h"

USBZHoldOutDroneVoiceComponent::USBZHoldOutDroneVoiceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioComponent = NULL;
}

void USBZHoldOutDroneVoiceComponent::StopCurrentVO() {
}

void USBZHoldOutDroneVoiceComponent::PlayVO(UAkAudioEvent* AudioEvent, int32 Priority, float CoolDown) {
}

bool USBZHoldOutDroneVoiceComponent::IsPlayingVO() const {
    return false;
}


