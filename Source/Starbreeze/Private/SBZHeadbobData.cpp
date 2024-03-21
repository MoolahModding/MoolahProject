#include "SBZHeadbobData.h"

USBZHeadbobData::USBZHeadbobData() {
    this->LocomotionCurve = NULL;
    this->RollAmplitudeModifier = 0.00f;
    this->BreathingCurve = NULL;
    this->BreathingFrequency = 0.16f;
    this->NormalBreathingAmplitude = 0.30f;
    this->CrouchBreathingAmplitude = 0.25f;
    this->TargetingBreathingAmplitude = 0.03f;
    this->BreathingAmplitudeModifier = 1.00f;
    this->LocomotionFPRigModifier = 0.50f;
    this->BreathingFPRigModifier = 0.50f;
    this->TargetingData = NULL;
}

