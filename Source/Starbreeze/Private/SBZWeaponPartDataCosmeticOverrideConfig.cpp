#include "SBZWeaponPartDataCosmeticOverrideConfig.h"

USBZWeaponPartDataCosmeticOverrideConfig::USBZWeaponPartDataCosmeticOverrideConfig() {
    this->OverriddenWeaponPart = NULL;
    this->bAddMeshes = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPartDataCosmeticOverrideConfig::StaticClass();
}


