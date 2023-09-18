#include "SBZSentryGunFireData.h"

USBZSentryGunFireData::USBZSentryGunFireData() {
    this->OverheatEffectClass = NULL;
    this->OverheatEffectClass = NULL;
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSentryGunFireData::StaticClass();
}


