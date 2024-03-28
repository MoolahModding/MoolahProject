#include "SBZInteractableDoor.h"

void ASBZInteractableDoor::HandleBreachPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

ASBZInteractableDoor::ASBZInteractableDoor() {
    this->SelectedRoom = NULL;
    this->MaxSlammedOpenAngle = 30.00f;
}

