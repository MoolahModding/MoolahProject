#include "SBZFirstAidPack.h"

ASBZFirstAidPack::ASBZFirstAidPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsInventory = false;
    this->bIsAIPlaced = true;
}


