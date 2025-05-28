#include "SBZAirNavigation.h"

ASBZAirNavigation::ASBZAirNavigation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NodeMinSize = 65535;
}

bool ASBZAirNavigation::HasValidNavigationAt(const FVector& Location) {
    return false;
}

void ASBZAirNavigation::GenerateNavigationData() {
}


