#include "SBZPlaceableWeaponBox.h"

ASBZPlaceableWeaponBox::ASBZPlaceableWeaponBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsActive = true;
}

void ASBZPlaceableWeaponBox::SetActiveState(bool bActive) {
}

void ASBZPlaceableWeaponBox::OnInteractionEnabledStateChange(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}


