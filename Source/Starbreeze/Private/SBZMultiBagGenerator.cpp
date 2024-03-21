#include "SBZMultiBagGenerator.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

void ASBZMultiBagGenerator::SetEnabled(bool bIsEnabled) {
}

void ASBZMultiBagGenerator::OnServerCompleteInteraction(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

ASBZMultiBagGenerator::ASBZMultiBagGenerator() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->BagType = NULL;
    this->NumberOfBags = 2;
    this->bDestroyOnLastBag = false;
}

