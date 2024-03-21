#include "SBZMicroCamera.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"

void ASBZMicroCamera::OnAICharacterKilled(APawn* InAIPawn) {
}

void ASBZMicroCamera::Multicast_SetArmed_Implementation() {
}

void ASBZMicroCamera::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZMicroCamera::Multicast_OverloadMicroCamera_Implementation() {
}

ASBZMicroCamera::ASBZMicroCamera() {
    this->RotationSpeed = 100.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->ExplosionInstigator = NULL;
    this->MicroCameraTasedEffectClass = NULL;
    this->MicroCameraExplodedEvent = NULL;
    this->DetonationEffect = NULL;
    this->TaseDuration = 10.00f;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
    this->bExplosionAffectsAIOnly = true;
    this->AutoMarkTickInterval = 2.00f;
    this->OverloadStartEvent = NULL;
    this->StopOverloadStopEvent = NULL;
    this->ArmedEvent = NULL;
    this->OverloadSoundDuration = 1.50f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
}

