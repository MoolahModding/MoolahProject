#include "SBZActorRingBuffer.h"
#include "GameFramework/Actor.h"

USBZActorRingBuffer::USBZActorRingBuffer() {
    this->Objects.AddDefaulted(1);
    this->RestrictedObjectClass = AActor::StaticClass();
}

void USBZActorRingBuffer::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


