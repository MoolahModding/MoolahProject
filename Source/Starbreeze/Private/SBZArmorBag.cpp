#include "SBZArmorBag.h"

ASBZArmorBag::ASBZArmorBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->ArmorChunkSizePerCharge = 2;
}


