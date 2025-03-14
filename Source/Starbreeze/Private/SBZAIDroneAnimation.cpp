#include "SBZAIDroneAnimation.h"

USBZAIDroneAnimation::USBZAIDroneAnimation() {
    this->RotorMaxSpeed = 2000.00f;
    this->RotorAcceleration = 2000.00f;
    this->RotorDeceleration = 500.00f;
    this->bIsFiring = false;
    this->bIsDamaged = false;
    this->AIDrone = NULL;
}


