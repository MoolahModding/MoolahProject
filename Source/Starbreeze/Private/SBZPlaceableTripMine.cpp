#include "SBZPlaceableTripMine.h"
#include "AkComponent.h"
#include "SBZToolSkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

ASBZPlaceableTripMine::ASBZPlaceableTripMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(SkeletalMesh);
    this->ExplosionInstigator = NULL;
    this->PlaceableTripMineEffectClass = NULL;
    this->PlaceableTripMineEffectClass = NULL;
    this->PlaceableTripMineExplodedEvent = NULL;
    this->DetonationEffect = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
    this->bExplosionAffectsAIOnly = true;
    this->AdditionalPlayerRange = 0.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkComponent->SetupAttachment(SkeletalMesh);
    this->LocalplayerFeedback = NULL;
    this->LocalplayerFeedback = NULL;
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = true;
}

void ASBZPlaceableTripMine::Server_SetUnarmed_Implementation() {
}

void ASBZPlaceableTripMine::Server_SetArmed_Implementation() {
}

void ASBZPlaceableTripMine::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


