#include "SBZAmbientSound.h"
#include "Components/SceneComponent.h"
#include "SBZAmbientSoundComponent.h"

ASBZAmbientSound::ASBZAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
    this->AmbientSoundComponent->SetupAttachment(RootComponent);
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void ASBZAmbientSound::HandleDeactivateSoundComponent(UActorComponent* Component) {
}

void ASBZAmbientSound::HandleActivateSoundComponent(UActorComponent* Component, bool bReset) {
}


