#include "SBZHackingComponent.h"
#include "Net/UnrealNetwork.h"

USBZHackingComponent::USBZHackingComponent() {
    this->HackingState = ESBZHackingState::NotHacked;
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
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


