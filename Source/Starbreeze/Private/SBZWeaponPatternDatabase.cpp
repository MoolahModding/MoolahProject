#include "SBZWeaponPatternDatabase.h"

USBZWeaponPatternDatabase::USBZWeaponPatternDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPatternDatabase::StaticClass();
}


