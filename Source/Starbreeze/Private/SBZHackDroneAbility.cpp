#include "SBZHackDroneAbility.h"

USBZHackDroneAbility::USBZHackDroneAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
}


