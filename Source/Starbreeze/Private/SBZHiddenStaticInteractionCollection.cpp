#include "SBZHiddenStaticInteractionCollection.h"

ASBZHiddenStaticInteractionCollection::ASBZHiddenStaticInteractionCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NumberOfContainers = 8;
    this->Seed = -1;
    this->ItemContainerClass = NULL;
    this->ContainerAfterKeyItemIndex = -1;
}

void ASBZHiddenStaticInteractionCollection::OnKeyItemInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


