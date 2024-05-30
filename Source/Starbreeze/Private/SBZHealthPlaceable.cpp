#include "SBZHealthPlaceable.h"

ASBZHealthPlaceable::ASBZHealthPlaceable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HealthGainedPerCharge = 0.35f;
    this->DownsGainedPerCharge = 0.00f;
    this->bAllowPartialCharges = false;
}


