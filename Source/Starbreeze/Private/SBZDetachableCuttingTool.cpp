#include "SBZDetachableCuttingTool.h"
#include "AkComponent.h"
#include "SBZToolSkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

ASBZDetachableCuttingTool::ASBZDetachableCuttingTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(SkeletalMesh);
    this->ExplosionInstigator = NULL;
    this->DetachableCuttingToolEffectClass = NULL;
    this->DetachableCuttingToolEffectClass = NULL;
    this->DetachableCuttingToolExplodedEvent = NULL;
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

void ASBZDetachableCuttingTool::Multicast_SetArmed_Implementation() {
}

void ASBZDetachableCuttingTool::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


