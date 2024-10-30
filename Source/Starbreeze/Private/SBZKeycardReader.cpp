#include "SBZKeycardReader.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZKeycardReader::ASBZKeycardReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
}

void ASBZKeycardReader::OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bInNewState) {
}

void ASBZKeycardReader::OnInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlled) {
}


