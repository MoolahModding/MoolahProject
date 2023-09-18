#include "SBZWeaponDOFData.h"

USBZWeaponDOFData::USBZWeaponDOFData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponDOFData::StaticClass();
}


