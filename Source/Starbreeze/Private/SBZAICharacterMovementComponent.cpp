#include "SBZAICharacterMovementComponent.h"

USBZAICharacterMovementComponent::USBZAICharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAccelerationForPaths = true;
    this->bProjectNavMeshWalking = true;
    this->AgentManager = NULL;
    this->MaxSprintSpeed = 500.00f;
    this->MaxAccelerationRunning = 650.00f;
    this->MaxDecelerationWalking = 300.00f;
    this->bSlowDownOnCurvedPath = true;
    this->MinRunSpeedOnCurvedPath = 300.00f;
    this->PathAngleForMinSpeed = 120.00f;
    this->bCanRunWhileFocusing = true;
    this->bCanRunWhileStrafing = true;
    this->bCanSprintWhileFocusing = false;
    this->NeighbourCollisionInnerRadius = 25.00f;
    this->NeighbourCollisionOuterRadius = 34.00f;
    this->NeighbourCollisionHardCollisionFactor = 80.00f;
    this->NeighbourCollisionSoftCollisionFactor = 15.00f;
    this->NeighbourCollisionMaxDuration = 2.00f;
    this->bNeighbourCollisionEnabled = false;
    this->MaxStepHeightRootMotion = 20.00f;
    this->SlowedSpeedReduction = 0.20f;
}


