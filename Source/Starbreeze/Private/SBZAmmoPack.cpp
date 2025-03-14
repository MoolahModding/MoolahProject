#include "SBZAmmoPack.h"

ASBZAmmoPack::ASBZAmmoPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->bIsInventory = false;
}


