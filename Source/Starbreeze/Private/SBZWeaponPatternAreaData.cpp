#include "SBZWeaponPatternAreaData.h"

USBZWeaponPatternAreaData::USBZWeaponPatternAreaData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPatternAreaData::StaticClass();
}


