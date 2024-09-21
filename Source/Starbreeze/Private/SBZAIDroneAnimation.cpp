#include "SBZAIDroneAnimation.h"

USBZAIDroneAnimation::USBZAIDroneAnimation() {
    this->MaxLeanAngle = 15.00f;
    this->RotorMaxSpeed = 2000.00f;
    this->RotorAcceleration = 2000.00f;
    this->RotorDeceleration = 500.00f;
    this->bIsHovering = false;
    this->bIsFiring = false;
    this->bIsDamaged = false;
    this->YawSpeed = 0.00f;
    this->Drone = NULL;
}


