#include "SBZRagdollSyncManager.h"
#include "Net/UnrealNetwork.h"

USBZRagdollSyncManager::USBZRagdollSyncManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USBZRagdollSyncManager::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZRagdollSyncManager::Multicast_RagdollSyncData_Implementation(const TArray<FSBZRagdollSyncData>& InRagdollSyncData) {
}

void USBZRagdollSyncManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZRagdollSyncManager, Ragdolls);
}


