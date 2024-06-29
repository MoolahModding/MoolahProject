#include "SBZHoldOutLootContainer.h"
#include "Net/UnrealNetwork.h"

ASBZHoldOutLootContainer::ASBZHoldOutLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LootClass = NULL;
    this->SpawnedLoot = NULL;
    this->bIsOpen = false;
    this->bReplicatedIsOpen = false;
}

void ASBZHoldOutLootContainer::SetOpen(bool bInIsOpen) {
}

void ASBZHoldOutLootContainer::OnRep_Open() {
}


void ASBZHoldOutLootContainer::Multicast_SetOpen_Implementation(bool bInIsOpen) {
}

void ASBZHoldOutLootContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHoldOutLootContainer, bReplicatedIsOpen);
}


