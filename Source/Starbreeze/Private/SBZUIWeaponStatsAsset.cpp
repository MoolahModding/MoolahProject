#include "SBZUIWeaponStatsAsset.h"

USBZUIWeaponStatsAsset::USBZUIWeaponStatsAsset() {
    this->WeaponStatsBlueprintClass = NULL;
    this->WeaponStatsBlueprintClass = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZUIWeaponStatsAsset::StaticClass();
}


