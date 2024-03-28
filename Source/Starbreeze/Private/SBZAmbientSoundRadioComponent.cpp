#include "SBZAmbientSoundRadioComponent.h"

void USBZAmbientSoundRadioComponent::PlayRadioSoundRand(bool bValue) {
}

void USBZAmbientSoundRadioComponent::PlayRadioSound(bool bValue) {
}

USBZAmbientSoundRadioComponent::USBZAmbientSoundRadioComponent() {
    this->RadioSoundEvent = NULL;
    this->RadioStopSoundEvent = NULL;
    this->RadioPlayingChance = 30;
}

