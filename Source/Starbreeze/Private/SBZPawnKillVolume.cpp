#include "SBZPawnKillVolume.h"

ASBZPawnKillVolume::ASBZPawnKillVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bShouldStartEnabled = true;
    this->bShouldAffectDrones = false;
}


