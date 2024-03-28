#include "SBZMeleeComponent.h"

void USBZMeleeComponent::Multicast_SetEnforcerSolidNetIDArray_Implementation(const TArray<int32>& InEnforcerSolidNetIDArray) {
}

void USBZMeleeComponent::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

USBZMeleeComponent::USBZMeleeComponent() {
    this->OwningCharacter = NULL;
    this->bIsFriendlyFireAllowedOverride = false;
}

