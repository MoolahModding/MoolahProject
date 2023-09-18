#include "SBZWeaponWearAndTearDatabase.h"

USBZWeaponWearAndTearDatabase::USBZWeaponWearAndTearDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponWearAndTearDatabase::StaticClass();
}


