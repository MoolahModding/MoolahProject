#include "SBZAmmoBag.h"

ASBZAmmoBag::ASBZAmmoBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfMagazinesPerCharge = 5;
    this->NumberOfGrenadesPerCharge = 1;
    this->Tags.AddDefaulted(1);
}


