#include "SBZTrafficVolume.h"

ASBZTrafficVolume::ASBZTrafficVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->TrafficLightActor = NULL;
    this->TrafficLightIndex = -1;
}


