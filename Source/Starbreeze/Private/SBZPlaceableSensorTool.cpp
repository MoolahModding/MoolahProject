#include "SBZPlaceableSensorTool.h"

#include "SBZToolSkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

ASBZPlaceableSensorTool::ASBZPlaceableSensorTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(SkeletalMesh);
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent->SetupAttachment(SkeletalMesh);
    this->AutoMarkTickInterval = 2.00f;
    this->SensorRange = 500.00f;
    this->MaxMarkableAICount = 10;
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = true;
}

void ASBZPlaceableSensorTool::Multicast_SensorAmmoDepleted_Implementation() {
}


