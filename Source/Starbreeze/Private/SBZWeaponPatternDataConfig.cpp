#include "SBZWeaponPatternDataConfig.h"

USBZWeaponPatternDataConfig::USBZWeaponPatternDataConfig() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPatternDataConfig::StaticClass();
}


