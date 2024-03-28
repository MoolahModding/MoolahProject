#include "SBZExplosiveChargesLevelProp.h"
#include "Net/UnrealNetwork.h"

void ASBZExplosiveChargesLevelProp::SetEnabled(bool bInIsEnabled) {
}

void ASBZExplosiveChargesLevelProp::OnRep_IsExploded() {
}

void ASBZExplosiveChargesLevelProp::OnRep_IsEnabled() {
}

void ASBZExplosiveChargesLevelProp::Multicast_SetEnabled_Implementation(bool bInIsEnabled) {
}

void ASBZExplosiveChargesLevelProp::IncrementPlacedExplosiveCount() {
}

void ASBZExplosiveChargesLevelProp::DecrementPlacedExplosiveCount() {
}


void ASBZExplosiveChargesLevelProp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZExplosiveChargesLevelProp, bIsExploded);
    DOREPLIFETIME(ASBZExplosiveChargesLevelProp, PlacedExplosives);
    DOREPLIFETIME(ASBZExplosiveChargesLevelProp, bIsEnabled);
}

ASBZExplosiveChargesLevelProp::ASBZExplosiveChargesLevelProp() {
    this->NumberOfExplosivesToPlace = 1;
    this->bCanCancelExplosiveTimer = false;
    this->bIsExploded = false;
    this->PlacedExplosives = 0;
    this->bIsEnabled = false;
}

