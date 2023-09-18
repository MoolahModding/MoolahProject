#include "SBZBaseWeaponData.h"

USBZBaseWeaponData::USBZBaseWeaponData() {
    this->SwayData = NULL;
    this->HeadbobData = NULL;
    this->ItemProgression = NULL;
    this->bUseSprintMoveData = false;
    this->TurnInPlaceAdditiveMoveFactor = 4.00f;
    this->TurnInPlaceAdditiveMoveInterSpeed = 10.00f;
    this->JumpStartAlpha = 1.00f;
    this->JumpStartADSAlpha = 0.20f;
    this->JumpLandAlpha = 1.00f;
    this->JumpLandADSAlpha = 0.20f;
    this->CrouchAlpha = 1.00f;
    this->CrouchADSAlpha = 0.20f;
    this->UncrouchAlpha = 1.00f;
    this->UncrouchADSAlpha = 0.20f;
    this->VaultLandAlpha = 1.00f;
    this->VaultLandADSAlpha = 0.20f;
    this->OverkillProgressionProgress = 100.00f;
    this->TargetingData = NULL;
    this->PitchLookOffsetCurve = NULL;
    this->AttributeModification = NULL;
    this->bIsInaccurateWeapon = false;
    this->WeaponSelectionScorer = NULL;
    this->WeaponDeselectionTimer = 0.00f;
    this->bCanAttackWhileMoving = true;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZBaseWeaponData::StaticClass();
}

int32 USBZBaseWeaponData::GetNbStickerPlacements() const {
    return 0;
}


