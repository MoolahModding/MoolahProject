#include "AkAmbientSound.h"
#include "AkComponent.h"

AAkAmbientSound::AAkAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
    this->AkAudioEvent = NULL;
    this->AkComponent = (UAkComponent*)RootComponent;
    this->StopWhenOwnerIsDestroyed = true;
    this->AutoPost = false;
}

void AAkAmbientSound::StopAmbientSound() {
}

void AAkAmbientSound::StartAmbientSound() {
}


