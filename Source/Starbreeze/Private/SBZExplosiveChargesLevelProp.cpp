#include "SBZExplosiveChargesLevelProp.h"
#include "Net/UnrealNetwork.h"

ASBZExplosiveChargesLevelProp::ASBZExplosiveChargesLevelProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageDistanceArray.AddDefaulted(1);
    this->bIsDestroyedOnExplosion = false;
    this->NumberOfExplosivesToPlace = 1;
    this->bCanCancelExplosiveTimer = false;
    this->bIsExploded = false;
    this->PlacedExplosivesCount = 0;
    this->bIsEnabled = false;
}

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
    DOREPLIFETIME(ASBZExplosiveChargesLevelProp, PlacedExplosivesCount);
    DOREPLIFETIME(ASBZExplosiveChargesLevelProp, bIsEnabled);
}


