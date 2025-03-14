#include "SBZAIDroneBase.h"
#include "Engine/EngineTypes.h"
#include "SBZAIDroneMovementComponent.h"
#include "SBZSkeletalMeshComponentBudgeted.h"

ASBZAIDroneBase::ASBZAIDroneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZSkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBZAIDroneMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}


