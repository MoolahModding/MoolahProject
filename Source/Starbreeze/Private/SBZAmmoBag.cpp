#include "SBZAmmoBag.h"

ASBZAmmoBag::ASBZAmmoBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->NumberOfMagazinesPerCharge = 5;
    this->NumberOfGrenadesPerCharge = 1;
    this->NumberOfMagazinesPerChargeScale = 1.00f;
    this->NumberOfGrenadesPerChargeChange = 0;
}


