#include "SBZPowerUpCharges.h"
#include "Net/UnrealNetwork.h"

ASBZPowerUpCharges::ASBZPowerUpCharges(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfCharges = 2;
    this->bIsLoudOnly = false;
    this->ChargesLeft = 0;
    this->CurrentState = ESBZPowerUpChargesState::NotPlaced;
}

void ASBZPowerUpCharges::SetState(ESBZPowerUpChargesState NewState) {
}

void ASBZPowerUpCharges::OnRep_CurrentState(ESBZPowerUpChargesState OldState) {
}

void ASBZPowerUpCharges::OnRep_ChargesLeft() {
}

void ASBZPowerUpCharges::OnAckCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZPowerUpCharges::Multicast_SetState_Implementation(ESBZPowerUpChargesState NewState) {
}

ESBZPowerUpChargesState ASBZPowerUpCharges::GetCurrentState() const {
    return ESBZPowerUpChargesState::NotPlaced;
}



void ASBZPowerUpCharges::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPowerUpCharges, ChargesLeft);
    DOREPLIFETIME(ASBZPowerUpCharges, CurrentState);
}


