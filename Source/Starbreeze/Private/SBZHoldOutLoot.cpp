#include "SBZHoldOutLoot.h"
#include "AkComponent.h"

ASBZHoldOutLoot::ASBZHoldOutLoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->SpawnAKEvent = NULL;
    this->TrackerAKEvent = NULL;
}


