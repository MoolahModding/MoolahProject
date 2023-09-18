#include "SBZInteractorComponent.h"
#include "Net/UnrealNetwork.h"

USBZInteractorComponent::USBZInteractorComponent() {
    this->CurrentInteraction = NULL;
    this->LastInteraction = NULL;
    this->ServerCompletingInteractable = NULL;
    this->InteractId = 0;
    this->ModeIndex = 0;
    this->ModeRaw = 255;
    this->bIsInteractionSignalRequired = false;
    this->ScreenInteractDistance = 1000.00f;
    this->MinScreenInteractDegrees = 30.00f;
    this->MinScreenInteractDot = 0.87f;
    
}

void USBZInteractorComponent::Server_StopInteraction_Implementation(USBZBaseInteractableComponent* Interaction) {
}

void USBZInteractorComponent::Server_StartInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id, int8 InModeIndex) {
}

void USBZInteractorComponent::Server_PredictionTimeout_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id) {
}

void USBZInteractorComponent::Server_CompleteInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id) {
}
bool USBZInteractorComponent::Server_CompleteInteraction_Validate(USBZBaseInteractableComponent* Interaction, int32 Id) {
    return true;
}

void USBZInteractorComponent::OnRep_ReplicatedData(const FSBZReplicatedInteractionData& OldReplicatedData) {
}

void USBZInteractorComponent::Multicast_StopSimulatedInteraction_Implementation() {
}

void USBZInteractorComponent::Multicast_StartSimulatedInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int8 InModeIndex) {
}

void USBZInteractorComponent::Multicast_CompletedInteraction_Implementation(USBZBaseInteractableComponent* Interaction, bool bIsInstant) {
}

void USBZInteractorComponent::Multicast_AbortInteraction_Implementation(USBZBaseInteractableComponent* Interaction) {
}

USBZBaseInteractableComponent* USBZInteractorComponent::GetCurrentInteraction() const {
    return NULL;
}

void USBZInteractorComponent::Client_StopInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id) {
}

void USBZInteractorComponent::Client_Removed_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id) {
}

float USBZInteractorComponent::BP_GetProgress() {
    return 0.0f;
}

int32 USBZInteractorComponent::BP_GetModeIndex() const {
    return 0;
}

void USBZInteractorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZInteractorComponent, ReplicatedData);
}


