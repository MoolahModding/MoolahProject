#include "SBZWeaponWallReactionData.h"

USBZWeaponWallReactionData::USBZWeaponWallReactionData() {
    this->DetectionDistance = 30.00f;
    this->DetectionRadius = 5.00f;
    this->InterpolationSpeed = 128.00f;
    this->InterpolationSpringFactor = 0.20f;
    this->CollisionProfileName = TEXT("Pawn");
    this->TickInterval = 0.03f;
}


