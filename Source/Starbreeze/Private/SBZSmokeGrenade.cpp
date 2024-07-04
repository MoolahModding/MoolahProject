#include "SBZSmokeGrenade.h"
#include "SBZPlayerSmokeGrenadeData.h"

ASBZSmokeGrenade::ASBZSmokeGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DataType = USBZPlayerSmokeGrenadeData::StaticClass();
}


