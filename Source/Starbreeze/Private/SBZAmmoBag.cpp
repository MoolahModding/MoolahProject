#include "SBZAmmoBag.h"

ASBZAmmoBag::ASBZAmmoBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->NumberOfMagazinesPerCharge = 5;
    this->NumberOfGrenadesPerCharge = 1;
}


