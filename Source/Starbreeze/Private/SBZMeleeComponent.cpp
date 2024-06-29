#include "SBZMeleeComponent.h"

USBZMeleeComponent::USBZMeleeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->bIsFriendlyFireAllowedOverride = false;
}

void USBZMeleeComponent::Multicast_SetEnforcerSolidNetIDArray_Implementation(const TArray<int32>& InEnforcerSolidNetIDArray) {
}

void USBZMeleeComponent::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


