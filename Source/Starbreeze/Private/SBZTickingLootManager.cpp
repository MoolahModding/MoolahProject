#include "SBZTickingLootManager.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZTickingLootManager::ASBZTickingLootManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SabotagableStates = 0;
    this->IncreaseTickingSpeedToBroadcast = 0.10f;
    this->DecreaseTickingSpeedToBroadcast = 0.10f;
}

void ASBZTickingLootManager::StopCounter() {
}

void ASBZTickingLootManager::OnSabotaged(bool bIsSabotaged) {
}

void ASBZTickingLootManager::OnRep_LootCounterData() {
}

void ASBZTickingLootManager::Multicast_StopCounter_Implementation(float CurrentValue) {
}

void ASBZTickingLootManager::Multicast_SetDesiredLootCount_Implementation(float DesiredLootCount) {
}

void ASBZTickingLootManager::IncreaseCounter() {
}

void ASBZTickingLootManager::DecreaseCounter() {
}

void ASBZTickingLootManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZTickingLootManager, LootCounterData);
}


