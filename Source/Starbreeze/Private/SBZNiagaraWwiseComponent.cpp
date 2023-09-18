#include "SBZNiagaraWwiseComponent.h"
#include "NiagaraComponent.h"
#include "SBZAmbientSoundComponent.h"

USBZNiagaraWwiseComponent::USBZNiagaraWwiseComponent() {
    this->EventToPlayOneShot = NULL;
    this->EventToPlay = NULL;
    this->EventToStopPlay = NULL;
    this->Rtpc = NULL;
    this->NiagaraEffectOneShot = NULL;
    this->NiagaraEffect = NULL;
    this->AudioComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->bPlayFromBeginning = false;
    this->bOneShotEffect = false;
    this->bUpdateRtpc = false;
    this->RtpcUpdateValue = 0.00f;
    this->RtpcInterpolationTimerMS = 0.00f;
}

void USBZNiagaraWwiseComponent::UpdateRtpc(float RtpcValue, float RtpcInterpolationValue) {
}

void USBZNiagaraWwiseComponent::StopEffectsLoop() {
}

void USBZNiagaraWwiseComponent::PlayEffectsOneShot() {
}

void USBZNiagaraWwiseComponent::PlayEffectsLoop() {
}

void USBZNiagaraWwiseComponent::DestroyComponents() {
}

void USBZNiagaraWwiseComponent::DeactivateComponent() {
}

void USBZNiagaraWwiseComponent::ActivateComponent() {
}


