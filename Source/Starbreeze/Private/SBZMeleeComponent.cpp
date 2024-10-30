#include "SBZMeleeComponent.h"

USBZMeleeComponent::USBZMeleeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->bIsFriendlyFireAllowedOverride = false;
}

void USBZMeleeComponent::Multicast_SetRemoveStaggeredTagNetIDArray_Implementation(const TArray<int32>& InRemoveStaggeredTagNetIDArray) {
}

void USBZMeleeComponent::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


