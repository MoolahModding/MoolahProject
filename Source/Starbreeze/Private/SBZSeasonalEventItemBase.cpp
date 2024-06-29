#include "SBZSeasonalEventItemBase.h"

ASBZSeasonalEventItemBase::ASBZSeasonalEventItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthGained = 0.35f;
    this->ArmorChunksToGrant = 2;
    this->NumberOfMagazines = 5;
    this->NumberOfGrenades = 1;
}

void ASBZSeasonalEventItemBase::Multicast_OnItemPickedUp_Implementation(bool bIsPositiveEffect) {
}



