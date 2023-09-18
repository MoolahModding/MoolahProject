#include "SBZDestroyGroup.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZDestroyGroup::ASBZDestroyGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldDestroyOnBeginplay = false;
    this->bHasDestroyedNonReplicatedActors = false;
    this->Seed = -1;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

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


