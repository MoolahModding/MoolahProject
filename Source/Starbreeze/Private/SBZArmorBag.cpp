#include "SBZArmorBag.h"

ASBZArmorBag::ASBZArmorBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmorChunkSizePerCharge = 2;
    this->Tags.AddDefaulted(2);
}


