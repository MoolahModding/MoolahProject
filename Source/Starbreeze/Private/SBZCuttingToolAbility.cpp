#include "SBZCuttingToolAbility.h"

void USBZCuttingToolAbility::OnGateStateChanged(ASBZGate* Gate, ESBZGateState OldState, ESBZGateState NewState) {
}

void USBZCuttingToolAbility::OnDisplayCaseStateChanged(ESBZDisplayCaseState NewState) {
}

void USBZCuttingToolAbility::OnCuttableActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

USBZCuttingToolAbility::USBZCuttingToolAbility() {
    this->DisplayCase = NULL;
    this->InteractableGate = NULL;
    this->OwnerCharacter = NULL;
    this->CurrentCuttableComponent = NULL;
    this->NoiseGenerationInterval = 5.00f;
    this->NoiseRange = 300.00f;
}

