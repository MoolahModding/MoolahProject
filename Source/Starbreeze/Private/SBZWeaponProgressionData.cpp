#include "SBZWeaponProgressionData.h"

USBZWeaponProgressionData::USBZWeaponProgressionData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponProgressionData::StaticClass();
}


