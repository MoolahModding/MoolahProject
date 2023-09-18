#include "SBZCharacterMovementSetting.h"

FSBZCharacterMovementSetting::FSBZCharacterMovementSetting() {
    this->Stances = 0;
    this->BaseEyeHeight = 0.00f;
    this->MaxWalkSpeedCrouched = 0.00f;
    this->MaxRunSpeed = 0.00f;
    this->MaxSprintSpeed = 0.00f;
    this->MaxTargetingSpeed = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->MaxAccelerationRunning = 0.00f;
    this->BrakingDecelerationWalking = 0.00f;
    this->bSlowDownOnCurvedPath = false;
    this->MinRunSpeedOnCurvedPath = 0.00f;
    this->PathAngleForMinSpeed = 0.00f;
    this->AvoidanceConsiderationRadius = 0.00f;
    this->AvoidanceDefaultTimeToLive = 0.00f;
    this->AvoidanceLockTimeAfterAvoid = 0.00f;
    this->AvoidanceLockTimeAfterClean = 0.00f;
    this->AvoidanceDeltaTimeToPredict = 0.00f;
    this->AvoidanceArtificialRadiusExpansion = 0.00f;
    this->bAvoidanceCanSlowDownMovement = false;
    this->MinAvoidanceSpeed = 0.00f;
    this->NeighbourCollisionInnerRadius = 0.00f;
    this->NeighbourCollisionOuterRadius = 0.00f;
    this->NeighbourCollisionHardCollisionFactor = 0.00f;
    this->NeighbourCollisionSoftCollisionFactor = 0.00f;
    this->NeighbourCollisionMaxDuration = 0.00f;
    this->PathFocalDistance = 0.00f;
    this->PathViewFocalDistance = 0.00f;
    this->AnimationData = NULL;
}

