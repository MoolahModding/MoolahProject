#include "SBZCustomizationRotateComponent.h"

USBZCustomizationRotateComponent::USBZCustomizationRotateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanRotateYaw = true;
    this->CanRotatePitch = true;
    this->RotationYawSpeedRate = 0.10f;
    this->RotationYawMaxDelta = 25.00f;
    this->RotationYawSpeedRateKeyboard = 0.50f;
    this->RotationYawSpeedRateStick = 1.00f;
    this->RotationRollSpeedRate = 0.05f;
    this->RotationRollMaxDelta = 25.00f;
    this->RotationRollSpeedRateKeyboard = 0.25f;
    this->RotationRollSpeedRateStick = 1.00f;
    this->RotationRollLimitMin = 40.00f;
    this->RotationRollLimitMax = 140.00f;
    this->FoundController = NULL;
}


