#include "SBZPlayerSmokeGrenadeData.h"

USBZPlayerSmokeGrenadeData::USBZPlayerSmokeGrenadeData() {
    this->RangeMultiplierIncrease = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerSmokeGrenadeData::StaticClass();
}


