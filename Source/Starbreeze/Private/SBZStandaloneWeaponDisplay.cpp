#include "SBZStandaloneWeaponDisplay.h"

ASBZStandaloneWeaponDisplay::ASBZStandaloneWeaponDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMergeWeaponMeshes = false;
    this->bRespawnAlways = true;
    this->SpawnedWeapon = NULL;
    this->PivotPointToSpawn = NULL;
    this->bForceWithoutPivotPoint = false;
    this->FOVMultiplier = 0.85f;
    this->SpawnedPivotPoint = NULL;
}

void ASBZStandaloneWeaponDisplay::SetupWeaponData(const USBZBaseWeaponData* InWeaponData, bool bIsRotationReset) {
}

void ASBZStandaloneWeaponDisplay::SetupWeaponConfig(const FSBZEquippableConfig& InWeaponConfig, bool bIsRotationReset) {
}

void ASBZStandaloneWeaponDisplay::SetPart(const USBZModularPartSlotBase* Slot, const USBZEquippablePartDataAsset* PartAsset, USBZEquippablePartConfig* PartConfig) {
}

void ASBZStandaloneWeaponDisplay::RemovePart(const USBZModularPartSlotBase* Slot) {
}



