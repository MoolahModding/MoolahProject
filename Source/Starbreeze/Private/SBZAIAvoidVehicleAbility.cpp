#include "SBZAIAvoidVehicleAbility.h"

USBZAIAvoidVehicleAbility::USBZAIAvoidVehicleAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AICharacter = NULL;
    this->CurrentVehicle = NULL;
}

void USBZAIAvoidVehicleAbility::Tick(float DeltaSeconds) {
}


