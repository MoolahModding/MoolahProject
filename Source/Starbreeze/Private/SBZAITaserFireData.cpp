#include "SBZAITaserFireData.h"

USBZAITaserFireData::USBZAITaserFireData() {
    this->DamageInterval[0] = 0.00f;
    this->DamageInterval[1] = 0.00f;
    this->DamageInterval[2] = 0.00f;
    this->DamageInterval[3] = 0.00f;
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAITaserFireData::StaticClass();
}


