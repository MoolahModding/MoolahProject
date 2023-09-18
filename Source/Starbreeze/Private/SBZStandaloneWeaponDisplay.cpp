#include "SBZStandaloneWeaponDisplay.h"

ASBZStandaloneWeaponDisplay::ASBZStandaloneWeaponDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMergeWeaponMeshes = false;
    this->bRespawnAlways = true;
    this->SpawnedWeapon = NULL;
    this->PivotPointToSpawn = NULL;
    this->PivotPointToSpawn = NULL;
    this->bForceWithoutPivotPoint = false;
    this->FOVMultiplier = 0.85f;
}

void ASBZStandaloneWeaponDisplay::SetupWeaponData(const USBZBaseWeaponData* InWeaponData) {
}

void ASBZStandaloneWeaponDisplay::SetupWeaponConfig(const FSBZEquippableConfig& InWeaponConfig) {
}

void ASBZStandaloneWeaponDisplay::SetPart(const USBZModularPartSlotBase* Slot, const USBZEquippablePartDataAsset* PartAsset, USBZEquippablePartConfig* PartConfig) {
}

void ASBZStandaloneWeaponDisplay::RemovePart(const USBZModularPartSlotBase* Slot) {
}



