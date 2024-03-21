#include "SBZAIHitByVehicleAbility.h"

USBZAIHitByVehicleAbility::USBZAIHitByVehicleAbility() {
    this->MinHeistState = EPD3HeistState::Alarm;
    this->CompatibleStances = 0;
    this->DeadlyVehicleSpeedHit = 500.00f;
    this->MinDeadlyVehicleImpactWidth = 10.00f;
}

