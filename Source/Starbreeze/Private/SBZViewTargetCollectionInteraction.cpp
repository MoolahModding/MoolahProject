#include "SBZViewTargetCollectionInteraction.h"
#include "SBZInteractableComponent.h"

void ASBZViewTargetCollectionInteraction::SetViewTargetCollection(AActor* InActor) {
}

void ASBZViewTargetCollectionInteraction::OnCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

ASBZViewTargetCollectionInteraction::ASBZViewTargetCollectionInteraction() {
    this->ViewTargetCollection = NULL;
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
}

