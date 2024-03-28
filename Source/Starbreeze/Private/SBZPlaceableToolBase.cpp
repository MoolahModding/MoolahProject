#include "SBZPlaceableToolBase.h"
#include "SBZInteractableComponent.h"

void ASBZPlaceableToolBase::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZPlaceableToolBase::OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASBZPlaceableToolBase::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlledInteractor) {
}

ASBZPlaceableToolBase::ASBZPlaceableToolBase() {
    this->DetonationTickInterval = 2.00f;
    this->DetonationRange = 500.00f;
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
}

