#include "SBZPlayerAnimationFPP.h"

USBZPlayerAnimationFPP::USBZPlayerAnimationFPP() {
    this->bIsTargeting = false;
    this->bIsHSInstigator = false;
    this->bLeftHandEquipped = false;
    this->PoseType = ESBZPoseType::FullBody;
    this->RightHandGripAlpha = 0.00f;
    this->LeftHandGripAlpha = 0.00f;
    this->LeftHandIKAlpha = 0.00f;
    this->LeftHandLocalIKAlpha = 0.00f;
    this->LeftHandWorldIKAlpha = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->AdditiveLeftHandAlpha = 0.00f;
    this->AdditiveAlpha = 0.00f;
    this->AdditiveMoveAlpha = 0.00f;
    this->AdditiveCameraAlpha = 0.00f;
    this->AdditiveMovePlayRate = 0.00f;
    this->AdditiveDetailAlpha = 0.00f;
    this->MoveGaitValue = 1.00f;
    this->RightHandOnlyRecoilBlendWeight = 0.00f;
    this->AdditiveMoveType = ESBZAdditiveMoveType::Equipped;
    this->IdlePose = NULL;
    this->IdleAdditivePose = NULL;
    this->IdleADSPose = NULL;
    this->IdleHSInstigatorPose = NULL;
    this->IdleHSInstigatorADSPose = NULL;
    this->RunPose = NULL;
    this->AdditiveMove = NULL;
    this->AdditiveMoveADS = NULL;
    this->AdditiveMoveLeftHandEquipped = NULL;
    this->AdditiveMoveLeftHandEquippedADS = NULL;
    this->LeftHandEquippedIdle = NULL;
    this->LeftHandEquippedUsingIdle = NULL;
    this->EquippableLeftGripPose = NULL;
    this->EquippableRightGripPose = NULL;
    this->AdditiveIdleLeftHand = NULL;
    this->EnterRunMontage = NULL;
    this->ExitRunMontage = NULL;
    this->PlayerCharacter = NULL;
    this->AnimationCollectionFPP = NULL;
    this->CurrentTraverseMontage = NULL;
}


