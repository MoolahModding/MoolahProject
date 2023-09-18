#include "SBZMarkerComponent.h"
#include "Net/UnrealNetwork.h"

USBZMarkerComponent::USBZMarkerComponent() {
    this->MarkerAssets[0] = NULL;
    this->MarkerAssets[1] = NULL;
    this->MarkerAssets[2] = NULL;
    this->MarkerAssets[3] = NULL;
    this->MarkerAssets[4] = NULL;
    this->MarkerAssets[5] = NULL;
    this->MarkerAssets[6] = NULL;
    this->MarkerAssets[7] = NULL;
    this->MarkerAssets[8] = NULL;
    this->MarkerAssets[9] = NULL;
    this->MarkerPriority[0] = 0;
    this->MarkerPriority[1] = 0;
    this->MarkerPriority[2] = 0;
    this->MarkerPriority[3] = 0;
    this->MarkerPriority[4] = 0;
    this->MarkerPriority[5] = 0;
    this->MarkerPriority[6] = 0;
    this->MarkerPriority[7] = 0;
    this->MarkerPriority[8] = 0;
    this->MarkerPriority[9] = 0;
    this->MarkerState = ESBZMarkerState::None;
    this->AttachComponent = NULL;
    
}

void USBZMarkerComponent::OnRep_MarkerState() {
}

void USBZMarkerComponent::Multicast_SetMarkerState_Implementation(ESBZMarkerState RepMarkerState) {
}

void USBZMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZMarkerComponent, MarkerState);
}


