#include "SBZNiagaraWwiseComponentNonOpt.h"
#include "AkComponent.h"
#include "NiagaraComponent.h"

USBZNiagaraWwiseComponentNonOpt::USBZNiagaraWwiseComponentNonOpt() {
    this->EventToPlayOneShot = NULL;
    this->EventToPlay = NULL;
    this->EventToStopPlay = NULL;
    this->Rtpc = NULL;
    this->NiagaraEffectOneShot = NULL;
    this->NiagaraEffect = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->bOneShotEffect = false;
    this->bUpdateRtpc = false;
    this->RtpcUpdateValue = 0.00f;
    this->RtpcInterpolationTimerMS = 0.00f;
}

void USBZNiagaraWwiseComponentNonOpt::UpdateRtpc(float RtpcValue, float RtpcInterpolationValue) {
}

void USBZNiagaraWwiseComponentNonOpt::StopEffectsLoop() {
}

void USBZNiagaraWwiseComponentNonOpt::PlayEffectsOneShot() {
}

void USBZNiagaraWwiseComponentNonOpt::PlayEffectsLoop() {
}

void USBZNiagaraWwiseComponentNonOpt::DestroyComponents() {
}

void USBZNiagaraWwiseComponentNonOpt::DeactivateComponent() {
}

void USBZNiagaraWwiseComponentNonOpt::ActivateComponent() {
}


