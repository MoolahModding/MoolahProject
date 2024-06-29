#include "SBZArmorBag.h"

ASBZArmorBag::ASBZArmorBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->ArmorChunkSizePerCharge = 2;
}


