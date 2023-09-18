#include "SBZAmmoPickup.h"

ASBZAmmoPickup::ASBZAmmoPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupModifier = 1.00f;
    this->Tags.AddDefaulted(1);
}


