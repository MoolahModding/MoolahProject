#include "SBZCharacterAnimationDataTP.h"

USBZCharacterAnimationDataTP::USBZCharacterAnimationDataTP() {
    this->MoveYawInterpSpeed = 400.00f;
    this->VelocityInterpSpeed = 4.00f;
    this->RootYawReconcileInterpConstSpeed = 50.00f;
    this->RootYawStartMoveInterpConstSpeed = 90.00f;
    this->MinMovingSpeed = 2.00f;
    this->MaxSpeedWarping = 1.40f;
    this->MinSpeedWarping = 0.30f;
    this->MaxSpeedWarpingSlopeReducer = 0.30f;
    this->MinSpeedWarpingReducedBySlope = 0.85f;
    this->bEnableFixUpperbodyInMovingBS = false;
    this->TurnInPlaceBlendOut = 0.40f;
    this->FootLeadingScale = 1.00f;
    this->FootLeadingInterpSpeed = 60.00f;
    this->FootLeadingMaxAngle = 30.00f;
    this->bEnablePivotSwitchAnimation = false;
    this->bEnableStartMoveAnimation = false;
    this->MaxTimeOffsetFromDesiredStopTime = 0.10f;
    this->bForceReadyPoseWhenJogging = false;
    this->bForceReadyPoseWhenTurning = false;
    this->AimOffsetMaxLODUpperbody = 3;
    this->AimOffsetMaxLODHead = 2;
    this->AimOffsetMaxLODHeadLeading = 2;
    this->AimOffsetMaxLODFullBody = 3;
    this->AimOffsetMaxLODUpperBodyCrouchIdle = 3;
    this->AimOffsetMaxLODUpperBodyCrouchMoving = 3;
    this->MinStartMovePlayRate = 0.50f;
    this->MaxIncreasingAimYawDuringStartMove = 60.00f;
    this->MovingJumpMinSpeed = 30.00f;
    this->MinAimPitchReadyPose = -60.00f;
    this->bEnableRandomLookAt = false;
    this->RandomLookAtSpeedExp = 3.00f;
    this->bEnableSnapViewToTarget = false;
    this->SnapToViewDuration = 0.60f;
    this->ForceEquippedPoseDuration = 2.00f;
    this->LeaningStrengthAlpha = 1.00f;
    this->bEnableHeadLeading = false;
    this->HeadLeadingUpperBodyLerpSpeed = 15.00f;
    this->HeadLeadingHeadInterpSpeed = 7.00f;
    this->HeadLeadingMaxAngle = 45.00f;
    this->bEnableAdditiveHeadLeading = false;
    this->HeadLeadingMaxAdditiveYaw = 40.00f;
    this->HeadLeadingAdditiveYawInterpSpeed = 2.00f;
    this->HeadLeadingAdditiveYawAlpha = 1.00f;
    this->AnkleAdjustmentMaxSpeed = 150.00f;
    this->DefaultRagdollBoneScale = 1.00f;
    this->CrouchTransitionDuration = 0.30f;
    this->CrouchTransitionExp = 1.00f;
    this->bUseHigherLowerBodyWhenCrouched = false;
    this->StopBlendOutTime = 0.10f;
    this->AdditiveHipTranslationSpeed = 20.00f;
    this->AdditiveHipRotationSpeed = 20.00f;
    this->SlopeWarpingAlpha = 1.00f;
    this->WrinkleAlpha = 1.00f;
    this->bCanDoHipsZBlending = true;
}


