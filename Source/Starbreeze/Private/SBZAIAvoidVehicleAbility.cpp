#include "SBZAIAvoidVehicleAbility.h"

USBZAIAvoidVehicleAbility::USBZAIAvoidVehicleAbility() {
    this->AICharacter = NULL;
    this->CurrentVehicle = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void USBZAIAvoidVehicleAbility::Tick(float DeltaSeconds) {
}


