#include "SBZAmbientSoundRadioComponent.h"

USBZAmbientSoundRadioComponent::USBZAmbientSoundRadioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadioSoundEvent = NULL;
    this->RadioStopSoundEvent = NULL;
    this->RadioPlayingChance = 30;
}

void USBZAmbientSoundRadioComponent::PlayRadioSoundRand(bool bValue) {
}

void USBZAmbientSoundRadioComponent::PlayRadioSound(bool bValue) {
}


