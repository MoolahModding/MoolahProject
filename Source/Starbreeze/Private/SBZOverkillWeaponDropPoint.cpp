#include "SBZOverkillWeaponDropPoint.h"

ASBZOverkillWeaponDropPoint::ASBZOverkillWeaponDropPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bIsAddedOnBeginPlay = true;
}

void ASBZOverkillWeaponDropPoint::RemoveFromWorldRuntime() {
}

void ASBZOverkillWeaponDropPoint::AddToWorldRuntime() {
}


