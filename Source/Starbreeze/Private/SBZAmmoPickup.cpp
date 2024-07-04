#include "SBZAmmoPickup.h"

ASBZAmmoPickup::ASBZAmmoPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->PickupModifier = 1.00f;
}


