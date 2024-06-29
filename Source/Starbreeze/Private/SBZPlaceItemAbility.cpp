#include "SBZPlaceItemAbility.h"
#include "ESBZAbilityInput.h"

USBZPlaceItemAbility::USBZPlaceItemAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::PlaceItem;
    this->OwnerCharacter = NULL;
    this->GhostActor = NULL;
    this->PlaceableActor = NULL;
}

void USBZPlaceItemAbility::Tick(float DeltaSeconds) {
}


