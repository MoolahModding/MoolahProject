#include "SBZStaticInteractionBinaryState.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

void ASBZStaticInteractionBinaryState::SetInteractionEnabled(bool bEnabled) {
}

void ASBZStaticInteractionBinaryState::OnRep_CurrentState() {
}

void ASBZStaticInteractionBinaryState::OnAckCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}


void ASBZStaticInteractionBinaryState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZStaticInteractionBinaryState, bState);
}

ASBZStaticInteractionBinaryState::ASBZStaticInteractionBinaryState() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bState = false;
}

