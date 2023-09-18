#include "SBZEquippableData.h"

USBZEquippableData::USBZEquippableData() {
    this->EquippableDefaultIdleFPPose = NULL;
    this->EquippableDefaultIdleTPPose = NULL;
    this->DefaultRightGripFPPose = NULL;
    this->DefaultLeftGripFPPose = NULL;
    this->DefaultRightGripTPPose = NULL;
    this->DefaultLeftGripTPPose = NULL;
    this->EquippableFamily = ESBZEquippableFamily::HandGun1H;
    this->CompatibleStances = 2147483647;
    this->WeightTierOffset = 0.00f;
    this->EquippableMenuAnimCollection = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippableData::StaticClass();
}


