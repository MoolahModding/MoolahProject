#include "SBZAIDrone_HackSentryAbility.h"
#include "ESBZAbilityInput.h"

USBZAIDrone_HackSentryAbility::USBZAIDrone_HackSentryAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->bCancelAbilitiesOnFailedActivation = true;
    this->Input = ESBZAbilityInput::ToolActivate;
    this->DroneSentryHackEffect = NULL;
    this->TargetSentry = NULL;
    this->DroneOwner = NULL;
}


