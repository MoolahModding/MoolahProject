#include "SBZToolCuttingData.h"

USBZToolCuttingData::USBZToolCuttingData() {
    this->Fuel = 100.00f;
    this->MaximumCutDistance = 150.00f;
    this->MouseLookSpeedModifier = 1.00f;
    this->GamepadLookSpeedModifier = 0.10f;
    this->FollowSplineMinAngleDegree = 45.00f;
    this->DamageDistanceArray.AddDefaulted(1);
    this->ArmorPenetration = 0.00f;
    this->FriendlyPlayerDamageScale = 0.25f;
    this->InstigatorPlayerDamageScale = 1.00f;
    this->bUseInstigatorPlayerDamageScale = false;
    this->DefaultSkillSpeedModifier = 0.00f;
    this->MinCuttableTier = ESBZCuttingMaterialTier::None;
}


