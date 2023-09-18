#include "SBZActorContainer.h"
#include "GameFramework/Actor.h"

USBZActorContainer::USBZActorContainer() {
    this->RestrictedObjectClass = AActor::StaticClass();
}

void USBZActorContainer::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


