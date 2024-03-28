#include "SBZAmbientSound.h"
#include "SBZAmbientSoundComponent.h"

void ASBZAmbientSound::HandleDeactivateSoundComponent(UActorComponent* Component) {
}

void ASBZAmbientSound::HandleActivateSoundComponent(UActorComponent* Component, bool bReset) {
}

ASBZAmbientSound::ASBZAmbientSound() {
    this->AmbientSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
}

