#include "SBZHiddenStaticInteractionCollection.h"

ASBZHiddenStaticInteractionCollection::ASBZHiddenStaticInteractionCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfContainers = 8;
    this->Seed = -1;
    this->ItemContainerClass = NULL;
    this->ItemContainerClass = NULL;
    this->ContainerAfterKeyItemIndex = -1;
    this->bNetLoadOnClient = false;
}

void ASBZHiddenStaticInteractionCollection::OnKeyItemInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


