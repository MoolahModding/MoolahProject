#include "SBZWeaponPatternData.h"

USBZWeaponPatternData::USBZWeaponPatternData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPatternData::StaticClass();
}

int32 USBZWeaponPatternData::GetNbExpectedColorsInConfig() const {
    return 0;
}


