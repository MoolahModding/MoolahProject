#include "SBZTargetingHeadbobData.h"

USBZTargetingHeadbobData::USBZTargetingHeadbobData() {
    this->BreathingCurve = NULL;
    this->LocomotionFPRigModifier = 0.50f;
    this->BreathingFPRigModifier = 1.00f;
    this->BreathingAmplitude = 1.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTargetingHeadbobData::StaticClass();
}


