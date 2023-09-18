#include "SBZWeaponWearAndTearData.h"

USBZWeaponWearAndTearData::USBZWeaponWearAndTearData() {
    this->WearAndTearLevel = 0;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponWearAndTearData::StaticClass();
}


