#include "SBZWeaponDecalData.h"

USBZWeaponDecalData::USBZWeaponDecalData() {
    this->DecalTexture = NULL;
    this->DecalTextureRotation = 0.00f;
    this->DecalTextureSize = 1.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponDecalData::StaticClass();
}


