#include "SBZWeaponAimAssistDataAsset.h"

USBZWeaponAimAssistDataAsset::USBZWeaponAimAssistDataAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponAimAssistDataAsset::StaticClass();
}


