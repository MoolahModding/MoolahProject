#include "SBZPlayerMeleeDamageData.h"

USBZPlayerMeleeDamageData::USBZPlayerMeleeDamageData() {
    this->HealthDamage = 0.00f;
    this->PropDamage = 10.00f;
    this->MaximumAimAssistAngleDifference = 65.00f;
    this->AimAssistSpeed = 2.50f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerMeleeDamageData::StaticClass();
}


