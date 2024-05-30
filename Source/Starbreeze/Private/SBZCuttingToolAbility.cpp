#include "SBZCuttingToolAbility.h"

USBZCuttingToolAbility::USBZCuttingToolAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->DisplayCase = NULL;
    this->InteractableGate = NULL;
    this->OwnerCharacter = NULL;
    this->CurrentCuttableComponent = NULL;
    this->NoiseGenerationInterval = 5.00f;
    this->NoiseRange = 300.00f;
}

void USBZCuttingToolAbility::OnGateStateChanged(ASBZGate* Gate, ESBZGateState OldState, ESBZGateState NewState) {
}

void USBZCuttingToolAbility::OnDisplayCaseStateChanged(ESBZDisplayCaseState NewState) {
}

void USBZCuttingToolAbility::OnCuttableActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


