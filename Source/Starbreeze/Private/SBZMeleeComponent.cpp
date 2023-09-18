#include "SBZMeleeComponent.h"

USBZMeleeComponent::USBZMeleeComponent() {
    this->OwningCharacter = NULL;
    this->bIsFriendlyFireAllowedOverride = false;
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
}

void USBZMeleeComponent::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


