#include "SBZTimedBagConverter.h"
#include "SBZInteractableComponent.h"

void ASBZTimedBagConverter::SetInteractionEnabled(bool bInEnabled) {
}

void ASBZTimedBagConverter::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractableComponent, USBZInteractorComponent* Interactor, bool bIsLocallyControlled) {
}

void ASBZTimedBagConverter::OnServerBagPickedUp() {
}

void ASBZTimedBagConverter::OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InInteractableComponent, bool bNewState) {
}

void ASBZTimedBagConverter::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}



ASBZTimedBagConverter::ASBZTimedBagConverter() {
    this->AttachedBagGenerator = NULL;
    this->Duration = 10.00f;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
}

