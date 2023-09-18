#include "SBZHeightTransitionCameraSettings.h"

FSBZHeightTransitionCameraSettings::FSBZHeightTransitionCameraSettings() {
    this->TransitionSpeed = 0.00f;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->BlendCustomCurve = NULL;
}

