#include "SBZHackingComponent.h"
#include "Net/UnrealNetwork.h"

USBZHackingComponent::USBZHackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HackingState = ESBZHackingState::NotHacked;
}

void USBZHackingComponent::SetHackingState(ESBZHackingState NewHackingState) {
}

void USBZHackingComponent::OnRep_HackingState() {
}

void USBZHackingComponent::Multicast_SetHackingState_Implementation(ESBZHackingState NewHackingState) {
}

ESBZHackingState USBZHackingComponent::GetHackingState() const {
    return ESBZHackingState::NotHacked;
}

void USBZHackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZHackingComponent, HackingState);
}


