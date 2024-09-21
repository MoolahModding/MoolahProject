#include "SBZInteractableGate.h"
#include "SBZInteractableComponent.h"
#include "SBZMiniGameComponent.h"

ASBZInteractableGate::ASBZInteractableGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->NavLinkComponentArray.AddDefaulted(1);
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->MiniGameComponent = CreateDefaultSubobject<USBZMiniGameComponent>(TEXT("SBZMiniGameComponent"));
    this->bIsMinigameIgnored = false;
    this->bIsMinigameFrontOnly = false;
}

void ASBZInteractableGate::OnStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZInteractableGate::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZInteractableGate::OnPredictedEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZInteractableGate::OnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled) {
}

void ASBZInteractableGate::OnAckRejectedPredictedInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZInteractableGate::OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}


