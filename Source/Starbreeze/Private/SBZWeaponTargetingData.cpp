#include "SBZWeaponTargetingData.h"

USBZWeaponTargetingData::USBZWeaponTargetingData() {
    this->bTargetingHideWeapon = false;
    this->SightSocket = TEXT("L_Sight");
    this->TargetingTransitionTime = 0.20f;
    this->TargetingProgressTrigger = 0.90f;
    this->TargetingXAxisOffset = 0.00f;
    this->TargetingMagnification = 1.00f;
    this->TargetingOnTopMagnification = 1.00f;
    this->TargetingRotationCurve = NULL;
    this->TargetingExitRotationCurve = NULL;
    this->HeadbobData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponTargetingData::StaticClass();
}


