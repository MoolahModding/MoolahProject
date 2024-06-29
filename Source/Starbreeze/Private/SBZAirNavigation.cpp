#include "SBZAirNavigation.h"

ASBZAirNavigation::ASBZAirNavigation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
}

bool ASBZAirNavigation::HasValidNavigationAt(const FVector& Location) {
    return false;
}

void ASBZAirNavigation::GenerateNavigationData() {
}


