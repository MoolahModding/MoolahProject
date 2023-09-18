#include "SBZWeaponSpreadData.h"

USBZWeaponSpreadData::USBZWeaponSpreadData() {
    this->InnerClusterNumber = 1;
    this->InnerClusterSpreadMultiplier = 0.50f;
    this->PieOcclusion = 0.00f;
    this->FireSpreadStart = 1.00f;
    this->FireSpreadIncrease = 0.40f;
    this->FireSpreadResetTime = 0.40f;
    this->FireSpreadDecayRate = 0.40f;
    this->FireSpreadCap = 6.15f;
    this->SpreadRecoveryMode = ESBZWeaponSpreadRecoveryMode::ResetTime;
    this->DeviationHipFireMultiplier = 1.50f;
    this->DeviationTargetingFireMultiplier = 1.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponSpreadData::StaticClass();
}


