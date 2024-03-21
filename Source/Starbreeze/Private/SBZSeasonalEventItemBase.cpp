#include "SBZSeasonalEventItemBase.h"
#include "SBZInteractableComponent.h"

void ASBZSeasonalEventItemBase::OnServerCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZSeasonalEventItemBase::Multicast_OnItemPickedUp_Implementation(bool bIsPositiveEffect) {
}


ASBZSeasonalEventItemBase::ASBZSeasonalEventItemBase() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bIsDestroyedOnPickUp = false;
    this->HealthGained = 0.35f;
    this->ArmorChunksToGrant = 2;
    this->NumberOfMagazines = 5;
    this->NumberOfGrenades = 1;
}

