#include "SBZMainMenuPlayerAnimation.h"

USBZMainMenuPlayerAnimation::USBZMainMenuPlayerAnimation() {
    this->PoseAnimation = NULL;
    this->EquippableLeftGripPose = NULL;
    this->EquippableRightGripPose = NULL;
    this->LeftHandIKAlpha = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->RightHandGripAlpha = 0.00f;
    this->LeftHandGripAlpha = 0.00f;
    this->Player = NULL;
}

