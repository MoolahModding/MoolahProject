#include "SBZPlayerGasGrenadeData.h"

USBZPlayerGasGrenadeData::USBZPlayerGasGrenadeData() {
    this->DamagePerSecond = 10.00f;
    this->DurationSeconds = 10.00f;
    this->TickSeconds = 0.00f;
    this->ArmorPenetration = 2.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerGasGrenadeData::StaticClass();
}


