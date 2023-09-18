#include "SBZFragGrenadeData.h"

USBZFragGrenadeData::USBZFragGrenadeData() {
    this->DamageGameplayEffectClass = NULL;
    this->DamageGameplayEffectClass = NULL;
    this->DamageTypeClass = NULL;
    this->DamageTypeClass = NULL;
    this->FriendlyPlayerDamageScale = 0.25f;
    this->bUseInstigatorPlayerDamageScale = false;
    this->InstigatorPlayerDamageScale = 1.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZFragGrenadeData::StaticClass();
}


