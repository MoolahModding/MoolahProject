#include "SBZHealthPlaceable.h"

ASBZHealthPlaceable::ASBZHealthPlaceable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthGainedPerCharge = 0.35f;
    this->bAllowPartialCharges = false;
    this->Tags.AddDefaulted(1);
}


