#include "SBZInteractableDoor.h"
#include "SBZInteractableDoorComponent.h"

ASBZInteractableDoor::ASBZInteractableDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZInteractableDoorComponent>(TEXT("SBZInteractableComponent"))) {
    this->SelectedRoom = NULL;
    this->MaxSlammedOpenAngle = 30.00f;
    this->NavLinkComponentArray.AddDefaulted(1);
    this->bUseBreachPOIandSound = true;
    this->Tags.AddDefaulted(1);
}

void ASBZInteractableDoor::HandleBreachPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}


