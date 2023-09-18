#include "SBZAIOrder_FreeHostage.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_FreeHostage::USBZAIOrder_FreeHostage() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->ReleaseHostageOrder = NULL;
    this->ReleaseHostageOrder = NULL;
    this->TiedHostage = NULL;
    this->Category = ESBZAIBehaviorCategory::Combat;
}

void USBZAIOrder_FreeHostage::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}


