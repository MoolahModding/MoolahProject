#include "SBZAmbientSound.h"
#include "Components/SceneComponent.h"
#include "SBZAmbientSoundComponent.h"

ASBZAmbientSound::ASBZAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AmbientSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
    this->AmbientSoundComponent->SetupAttachment(RootComponent);
}

void ASBZAmbientSound::HandleDeactivateSoundComponent(UActorComponent* Component) {
}

void ASBZAmbientSound::HandleActivateSoundComponent(UActorComponent* Component, bool bReset) {
}


