#include "SBZECMJammer.h"
#include "AkComponent.h"
#include "SBZToolSkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

ASBZECMJammer::ASBZECMJammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkComponent->SetupAttachment(SkeletalMesh);
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(SkeletalMesh);
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = true;
}



