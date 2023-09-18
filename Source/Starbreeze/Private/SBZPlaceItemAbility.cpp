#include "SBZPlaceItemAbility.h"
#include "ESBZAbilityInput.h"

USBZPlaceItemAbility::USBZPlaceItemAbility() {
    this->OwnerCharacter = NULL;
    this->GhostActor = NULL;
    this->PlaceableActor = NULL;
    this->Input = ESBZAbilityInput::PlaceItem;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

void USBZPlaceItemAbility::Tick(float DeltaSeconds) {
}


