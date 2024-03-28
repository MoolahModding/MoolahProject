#include "SBZAlertnessDataComponent.h"
#include "Net/UnrealNetwork.h"

void UDEPRECATED_SBZAlertnessDataComponent::OnRep_AlertState() {
}

void UDEPRECATED_SBZAlertnessDataComponent::Multicast_SetAlertState_Implementation(int8 RepAlertState) {
}

void UDEPRECATED_SBZAlertnessDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDEPRECATED_SBZAlertnessDataComponent, AlertState);
}

UDEPRECATED_SBZAlertnessDataComponent::UDEPRECATED_SBZAlertnessDataComponent() {
    this->AlertState = -1;
    this->AlertMarkerAsset = NULL;
}

