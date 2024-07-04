#include "SBZMarkerLibrary.h"

USBZMarkerLibrary::USBZMarkerLibrary() {
}

void USBZMarkerLibrary::RemoveReplicatedMarker(UObject* WorldContextObject, int32 ID) {
}

void USBZMarkerLibrary::RemoveLocalMarker(UObject* WorldContextObject, int32 ID) {
}

int32 USBZMarkerLibrary::AddReplicatedMarker(UObject* WorldContextObject, USBZMarkerDataAsset* MarkerDataAsset, const FVector Location) {
    return 0;
}

int32 USBZMarkerLibrary::AddLocalMarker(UObject* WorldContextObject, USBZMarkerDataAsset* MarkerDataAsset, const FVector Translation, USceneComponent* Component, FName SocketName) {
    return 0;
}


