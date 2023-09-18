#include "SBZEquippablePartDataAsset.h"

USBZEquippablePartDataAsset::USBZEquippablePartDataAsset() {
    this->MagazineData = NULL;
    this->AmmoData = NULL;
    this->ModGripAnimData = NULL;
    this->MuzzleData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippablePartDataAsset::StaticClass();
}

void USBZEquippablePartDataAsset::GetModificationsUIData(const USBZBaseWeaponData* WeaponData, FSBZEquippablePartUIData& PartUIData) const {
}


