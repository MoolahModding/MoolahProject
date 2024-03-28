#include "SBZNiagaraWwiseActor.h"
#include "NiagaraComponent.h"
#include "SBZAmbientSoundComponent.h"

void ASBZNiagaraWwiseActor::UpdateRtpc(float RtpcValue, float RtpcInterpolationValue) {
}

void ASBZNiagaraWwiseActor::StopEffectsLoop() {
}

void ASBZNiagaraWwiseActor::PlayEffectsOneShot() {
}

void ASBZNiagaraWwiseActor::PlayEffectsLoop() {
}

void ASBZNiagaraWwiseActor::DestroyComponents() {
}

void ASBZNiagaraWwiseActor::DeactivateActor() {
}

void ASBZNiagaraWwiseActor::ActivateActor() {
}

ASBZNiagaraWwiseActor::ASBZNiagaraWwiseActor() {
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

