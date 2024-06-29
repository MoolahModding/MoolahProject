#include "SBZViewTargetCollectionInteraction.h"
#include "SBZInteractableComponent.h"

ASBZViewTargetCollectionInteraction::ASBZViewTargetCollectionInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewTargetCollection = NULL;
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
}

void ASBZViewTargetCollectionInteraction::SetViewTargetCollection(AActor* InActor) {
}

void ASBZViewTargetCollectionInteraction::OnCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}


