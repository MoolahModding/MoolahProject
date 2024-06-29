#include "SBZArmorRepairKit.h"

ASBZArmorRepairKit::ASBZArmorRepairKit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsInventory = false;
    this->bIsAIPlaced = true;
}


