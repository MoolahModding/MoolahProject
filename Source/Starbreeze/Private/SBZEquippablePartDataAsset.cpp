#include "SBZEquippablePartDataAsset.h"

USBZEquippablePartDataAsset::USBZEquippablePartDataAsset() {
    this->MagazineData = NULL;
    this->AmmoData = NULL;
    this->ModGripAnimData = NULL;
    this->MuzzleData = NULL;
}

void USBZEquippablePartDataAsset::GetModificationsUIData(const USBZBaseWeaponData* WeaponData, FSBZEquippablePartUIData& PartUIData) const {
}


