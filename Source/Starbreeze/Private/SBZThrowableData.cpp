#include "SBZThrowableData.h"

USBZThrowableData::USBZThrowableData() {
    this->ThrowForce = 1500.00f;
    this->CharacterMovementVelocityModifier = -1.00f;
    this->PitchAdjustment = 5.00f;
    this->SpawnOffsetFromCamera = 25.00f;
    this->bIsHeldItem = false;
    this->AmmoInventoryMax = 5;
    this->AmmoInventory = 5;
    this->bIsFriendlyFireAllowed = true;
    this->OnHitVelocityModifier = 1.00f;
    this->ThrowComment = NULL;
    this->ThrowableAdditionalTargetSearchMultiplier = 0.75f;
    this->AdditionalTargetsWeight = 0.40f;
    this->IdealLaunchAngle = 45.00f;
    this->ThrowLocationForwardOffset = 0.00f;
    this->ThrowLocationDeviation = 100.00f;
    this->Cooldown = 30.00f;
    this->DroppedComment = NULL;
    this->MaxThrowAngle = 30.00f;
    this->WeaponSelectionScorer = NULL;
    this->AimAssistData = NULL;
    this->FireData = NULL;
}


