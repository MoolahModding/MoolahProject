#include "SBZThermalScopeWeapon.h"

ASBZThermalScopeWeapon::ASBZThermalScopeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetSocketName = TEXT("UpperBodyAttachment");
    this->ScopeFOVMultiplier = 0.15f;
    this->OverskillHET5BlackTraceEffect = NULL;
    this->OverskillHET5BlackTraceEffectLength = 500.00f;
}


