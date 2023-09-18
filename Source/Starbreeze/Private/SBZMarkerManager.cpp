#include "SBZMarkerManager.h"
#include "Net/UnrealNetwork.h"

USBZMarkerManager::USBZMarkerManager() {
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
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


