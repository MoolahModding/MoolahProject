#include "SBZAIPointOfInterestReplicatedDebris.h"
#include "Net/UnrealNetwork.h"

ASBZAIPointOfInterestReplicatedDebris::ASBZAIPointOfInterestReplicatedDebris(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Debris = NULL;
    this->bSpawnDebris = false;
}

void ASBZAIPointOfInterestReplicatedDebris::OnRep_OnSpawnDebris() {
}

void ASBZAIPointOfInterestReplicatedDebris::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIPointOfInterestReplicatedDebris, bSpawnDebris);
}


