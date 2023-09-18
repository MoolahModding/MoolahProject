#include "SBZAIDrone.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "SBZAIDroneAttributeSet.h"

ASBZAIDrone::ASBZAIDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSet = CreateDefaultSubobject<USBZAIDroneAttributeSet>(TEXT("SBZAIDroneAttributeSet"));
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponentBudgeted"));
    this->DroneMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
    this->RootComponent = SkeletalMesh;
}

void ASBZAIDrone::Multicast_OnKill_Implementation() {
}


