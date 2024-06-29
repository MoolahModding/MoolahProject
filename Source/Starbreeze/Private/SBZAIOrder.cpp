#include "SBZAIOrder.h"

USBZAIOrder::USBZAIOrder() {
    this->bShouldRemoveTagsOnStopped = true;
    this->Mode = ESBZAIOrderMode::Deferred;
    this->bIsInstanced = true;
    this->bIsPersistent = false;
    this->DefaultSelectionScore = 0.00f;
    this->DefaultUtilityScore = 0.00f;
    this->Behavior = NULL;
    this->Category = ESBZAIBehaviorCategory::None;
    this->OrderOwner = NULL;
    this->TargetActor = NULL;
    this->bCompleteOnStop = false;
}






bool USBZAIOrder::ExecPredicate_Implementation(const UObject* Owner) const {
    return false;
}


