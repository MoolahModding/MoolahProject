#include "SBZMeleeComponent.h"

USBZMeleeComponent::USBZMeleeComponent() {
    this->OwningCharacter = NULL;
    this->bIsFriendlyFireAllowedOverride = false;
    
}

void USBZMeleeComponent::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


