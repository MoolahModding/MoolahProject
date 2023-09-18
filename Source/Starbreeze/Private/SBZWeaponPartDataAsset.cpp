#include "SBZWeaponPartDataAsset.h"

USBZWeaponPartDataAsset::USBZWeaponPartDataAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPartDataAsset::StaticClass();
}


