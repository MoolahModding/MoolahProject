#include "AkAmbientSound.h"
#include "AkComponent.h"

AAkAmbientSound::AAkAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkAudioEvent = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
    this->StopWhenOwnerIsDestroyed = true;
    this->AutoPost = false;
    FProperty* p_bHidden = GetClass()->FindPropertyByName("bHidden");
    *p_bHidden->ContainerPtrToValuePtr<uint8>(this) = true;
    this->RootComponent = AkComponent;
}

void AAkAmbientSound::StopAmbientSound() {
}

void AAkAmbientSound::StartAmbientSound() {
}


