#include "SBZAIObjectiveComponent.h"

void USBZAIObjectiveComponent::OnOrderCompleted(USBZAIOrder* Order, APawn* Owner, TEnumAsByte<EBTNodeResult::Type> OrderResult) {
}

void USBZAIObjectiveComponent::OnInteractStateChanged(const USBZBaseInteractableComponent* Interactable, bool bEnabled) {
}

void USBZAIObjectiveComponent::OnCollisionChanged(UPrimitiveComponent* ActorPrimitive) {
}

ASBZRoomVolume* USBZAIObjectiveComponent::GetLastKnownRoom() const {
    return NULL;
}

ASBZRoomVolume* USBZAIObjectiveComponent::GetCurrentRoom_Implementation() const {
    return NULL;
}

USBZAIObjectiveComponent::USBZAIObjectiveComponent() {
    this->bRegisterToWorldRuntime = true;
    this->bExcludeInteractableAfterUse = false;
    this->InteractionType = EAIObjectiveInteractionTypes::DirectInteraction;
    this->InteractionPriority = EAIObjectivePriority::StandardPriority;
    this->CurrentInteractable = -1;
    this->LastKnownRoom = NULL;
    this->MoveToPosEQSQuery = NULL;
}

