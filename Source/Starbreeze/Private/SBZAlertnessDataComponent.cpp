#include "SBZAlertnessDataComponent.h"
#include "Net/UnrealNetwork.h"

UDEPRECATED_SBZAlertnessDataComponent::UDEPRECATED_SBZAlertnessDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlertState = -1;
    this->AlertMarkerAsset = NULL;
}

void UDEPRECATED_SBZAlertnessDataComponent::OnRep_AlertState() {
}

void UDEPRECATED_SBZAlertnessDataComponent::Multicast_SetAlertState_Implementation(int8 RepAlertState) {
}

void UDEPRECATED_SBZAlertnessDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDEPRECATED_SBZAlertnessDataComponent, AlertState);
}


