#include "SBZHiddenStaticInteractionCollection.h"

void ASBZHiddenStaticInteractionCollection::OnKeyItemInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

ASBZHiddenStaticInteractionCollection::ASBZHiddenStaticInteractionCollection() {
    this->NumberOfContainers = 8;
    this->Seed = -1;
    this->ItemContainerClass = NULL;
    this->ContainerAfterKeyItemIndex = -1;
}

