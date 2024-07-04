#include "SBZActorContainerLibrary.h"

USBZActorContainerLibrary::USBZActorContainerLibrary() {
}

AActor* USBZActorContainerLibrary::FindNearestActorFromContainer(const USBZActorContainer* Container, const FVector& Location) {
    return NULL;
}

TArray<AActor*> USBZActorContainerLibrary::FindNearbyActorsFromContainer(USBZActorContainer* Container, const FVector& Position, float Distance) {
    return TArray<AActor*>();
}


