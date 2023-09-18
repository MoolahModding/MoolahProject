#include "SBZWeaponSightData.h"

USBZWeaponSightData::USBZWeaponSightData() {
    this->TargetingData = NULL;
    this->DOFData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponSightData::StaticClass();
}


