#include "SBZCuttingToolAbility.h"

USBZCuttingToolAbility::USBZCuttingToolAbility() {
    this->DisplayCase = NULL;
    this->InteractableGate = NULL;
    this->OwnerCharacter = NULL;
    this->NoiseGenerationInterval = 5.00f;
    this->NoiseRange = 300.00f;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

void USBZCuttingToolAbility::OnGateStateChanged(ASBZGate* Gate, ESBZGateState OldState, ESBZGateState NewState) {
}

void USBZCuttingToolAbility::OnDisplayCaseStateChanged(ESBZDisplayCaseState NewState) {
}


