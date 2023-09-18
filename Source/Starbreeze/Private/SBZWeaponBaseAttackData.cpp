#include "SBZWeaponBaseAttackData.h"

USBZWeaponBaseAttackData::USBZWeaponBaseAttackData() {
    this->DamageTypeClass = NULL;
    this->DamageTypeClass = NULL;
    this->TargetEffectClass = NULL;
    this->TargetEffectClass = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponBaseAttackData::StaticClass();
}


