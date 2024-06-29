#include "SBZAIOrder_FollowTarget.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_FollowTarget::USBZAIOrder_FollowTarget() {
    this->bIsPersistent = true;
    this->Category = ESBZAIBehaviorCategory::Combat;
}

void USBZAIOrder_FollowTarget::OnOwnerOrderPushed(ASBZAIController* AIController, USBZAIOrder* AIOrder) {
}

void USBZAIOrder_FollowTarget::OnOwnerInteracted(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void USBZAIOrder_FollowTarget::OnHitByPlayer() {
}

void USBZAIOrder_FollowTarget::OnAIPawnKilled() {
}


