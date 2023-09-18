#include "SBZTasedData.h"

USBZTasedData::USBZTasedData() {
    this->LimitedControlTimer = 10.00f;
    this->AccuracyModifierDegrees = 10.00f;
    this->TasedTiltSpeed = 45.00f;
    this->TasedTiltDegrees = 10.00f;
    this->TasedCameraShakeFeedback = NULL;
    this->TasedCameraShakeFeedback = NULL;
    this->TasedGentlyCameraShakeFeedback = NULL;
    this->TasedGentlyCameraShakeFeedback = NULL;
    this->TasedUncontrolledCameraShakeFeedback = NULL;
    this->TasedUncontrolledCameraShakeFeedback = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTasedData::StaticClass();
}


