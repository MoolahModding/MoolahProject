#include "SBZItemContainer.h"
#include "SBZInteractableComponent.h"

void ASBZItemContainer::SetInteractionEnabled(bool bEnabled) {
}

void ASBZItemContainer::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

ASBZItemContainer::ASBZItemContainer() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->HiddenItem = NULL;
    this->OtherContainer = NULL;
    this->bHasItem = false;
    this->bIsBeforeOtherContainer = false;
}

