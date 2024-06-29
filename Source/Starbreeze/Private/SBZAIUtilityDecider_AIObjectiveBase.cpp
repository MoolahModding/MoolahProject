#include "SBZAIUtilityDecider_AIObjectiveBase.h"

USBZAIUtilityDecider_AIObjectiveBase::USBZAIUtilityDecider_AIObjectiveBase() {
    this->CurrentGate = -1;
    this->EndRoom = NULL;
    this->AcceptableRadius = 100.00f;
}

void USBZAIUtilityDecider_AIObjectiveBase::OnDoorInteractionCompleted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlled) {
}

void USBZAIUtilityDecider_AIObjectiveBase::ObjectiveInteractableChanged() {
}


