#include "SBZEquippablePartDataAsset.h"

void USBZEquippablePartDataAsset::GetModificationsUIData(const USBZBaseWeaponData* WeaponData, FSBZEquippablePartUIData& PartUIData) const {
}

USBZEquippablePartDataAsset::USBZEquippablePartDataAsset() {
    this->MagazineData = NULL;
    this->AmmoData = NULL;
    this->ModGripAnimData = NULL;
    this->MuzzleData = NULL;
}

