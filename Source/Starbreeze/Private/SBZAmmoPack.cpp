#include "SBZAmmoPack.h"

ASBZAmmoPack::ASBZAmmoPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsInventory = false;
}


