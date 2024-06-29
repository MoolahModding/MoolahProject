#include "SBZPlayerMovementComponent.h"

USBZPlayerMovementComponent::USBZPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoComputeTrajectory = false;
    this->AutoComputeTrajectoryInterval = 0.35f;
    this->MinSpeedToSprintAccelerating = 105.00f;
    this->MinSpeedToSprintDecelerating = 210.00f;
    this->MaxAngleToSprintAccelerating = 72.50f;
    this->MaxAngleToSprintDecelerating = 53.10f;
    this->MaxSimulationTimeStepForMovingObject = 0.02f;
    this->PushActorVelToImpulseModifier = 0.80f;
    this->PushActorVelToAngularImpulseModifier = 0.03f;
    this->MovingObjectCollisionMinLaunchVelocity = 100.00f;
    this->MovingObjectCollisionMaxLaunchVelocity = 2000.00f;
    this->MovingObjectCollisionVelocityFactor = 2.00f;
    this->MovingObjectCapsuleInflation = 1.10f;
    this->MinLoadoutTierIndex = 1;
    this->SkillSprintModifier = 0.00f;
    this->SkillWalkHumanShieldModifier = 0.00f;
}

void USBZPlayerMovementComponent::Server_SetWantToSprint_Implementation(bool bInWantToSprint) {
}
bool USBZPlayerMovementComponent::Server_SetWantToSprint_Validate(bool bInWantToSprint) {
    return true;
}

void USBZPlayerMovementComponent::Multicast_SetWantToSprint_Implementation(bool bInWantToSprint) {
}


