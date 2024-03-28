#include "SBZAIPointOfInterestReplicatedDebris.h"
#include "Net/UnrealNetwork.h"

void ASBZAIPointOfInterestReplicatedDebris::OnRep_OnSpawnDebris() {
}

void ASBZAIPointOfInterestReplicatedDebris::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIPointOfInterestReplicatedDebris, bSpawnDebris);
}

ASBZAIPointOfInterestReplicatedDebris::ASBZAIPointOfInterestReplicatedDebris() {
    this->Debris = NULL;
    this->bSpawnDebris = false;
}

