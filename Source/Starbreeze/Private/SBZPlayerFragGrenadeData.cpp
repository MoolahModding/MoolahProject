#include "SBZPlayerFragGrenadeData.h"

USBZPlayerFragGrenadeData::USBZPlayerFragGrenadeData() {
    this->DamageDistanceArray.AddDefaulted(1);
    this->ArmorPenetration = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerFragGrenadeData::StaticClass();
}


