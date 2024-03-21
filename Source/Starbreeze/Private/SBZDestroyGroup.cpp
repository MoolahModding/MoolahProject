#include "SBZDestroyGroup.h"
#include "Net/UnrealNetwork.h"

void ASBZDestroyGroup::OnRep_HasDestroyedActors(bool OldValue) {
}

void ASBZDestroyGroup::Multicast_DestroyActors_Implementation() {
}

void ASBZDestroyGroup::DestroyActors(TArray<AActor*>& KeptActors, TArray<AActor*>& DestroyedActors) {
}

void ASBZDestroyGroup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDestroyGroup, bHasDestroyedNonReplicatedActors);
}

ASBZDestroyGroup::ASBZDestroyGroup() {
    this->bShouldDestroyOnBeginplay = false;
    this->bHasDestroyedNonReplicatedActors = false;
    this->Seed = -1;
}

