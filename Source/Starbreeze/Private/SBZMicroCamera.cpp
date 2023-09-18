#include "SBZMicroCamera.h"
#include "AkComponent.h"
#include "SBZToolSkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

ASBZMicroCamera::ASBZMicroCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationSpeed = 100.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(SkeletalMesh);
    this->ExplosionInstigator = NULL;
    this->MicroCameraTasedEffectClass = NULL;
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
    this->AkComponent->SetupAttachment(SkeletalMesh);
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = true;
}

void ASBZMicroCamera::OnAICharacterKilled(APawn* InAIPawn) {
}

void ASBZMicroCamera::Multicast_SetArmed_Implementation() {
}

void ASBZMicroCamera::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZMicroCamera::Multicast_OverloadMicroCamera_Implementation() {
}


