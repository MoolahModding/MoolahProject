#include "SBZMarkerManager.h"
#include "Net/UnrealNetwork.h"

USBZMarkerManager::USBZMarkerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDamageStatusMarkerCount = 10;
    this->DamageStatusMarkerDurationSeconds = 3.00f;
}

void USBZMarkerManager::OnRep_ReplicatedMarkers() {
}

void USBZMarkerManager::Multicast_RemoveMarker_Implementation(uint32 ID) {
}

void USBZMarkerManager::Multicast_AddMarker_Implementation(uint32 ID, const USBZMarkerDataAsset* MarkerAsset, const FVector& Translation) {
}

void USBZMarkerManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZMarkerManager, ReplicatedMarkers);
}


