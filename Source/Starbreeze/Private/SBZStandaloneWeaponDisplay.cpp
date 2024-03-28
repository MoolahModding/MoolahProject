#include "SBZStandaloneWeaponDisplay.h"

void ASBZStandaloneWeaponDisplay::SetupWeaponData(const USBZBaseWeaponData* InWeaponData) {
}

void ASBZStandaloneWeaponDisplay::SetupWeaponConfig(const FSBZEquippableConfig& InWeaponConfig) {
}

void ASBZStandaloneWeaponDisplay::SetPart(const USBZModularPartSlotBase* Slot, const USBZEquippablePartDataAsset* PartAsset, USBZEquippablePartConfig* PartConfig) {
}

void ASBZStandaloneWeaponDisplay::RemovePart(const USBZModularPartSlotBase* Slot) {
}


ASBZStandaloneWeaponDisplay::ASBZStandaloneWeaponDisplay() {
    this->bMergeWeaponMeshes = false;
    this->bRespawnAlways = true;
    this->SpawnedWeapon = NULL;
    this->PivotPointToSpawn = NULL;
    this->bForceWithoutPivotPoint = false;
    this->FOVMultiplier = 0.85f;
    this->SpawnedPivotPoint = NULL;
}

