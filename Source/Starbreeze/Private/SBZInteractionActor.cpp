#include "SBZInteractionActor.h"
#include "SBZInteractableComponent.h"

void ASBZInteractionActor::HandleServerComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZInteractionActor::HandleAckComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

ASBZInteractionActor::ASBZInteractionActor() {
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("Interaction"));
}

