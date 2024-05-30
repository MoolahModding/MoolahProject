#include "SBZAIOrder_FreeHostage.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_FreeHostage::USBZAIOrder_FreeHostage() {
    this->Category = ESBZAIBehaviorCategory::Combat;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->ReleaseHostageOrder = NULL;
    this->TiedHostage = NULL;
}

void USBZAIOrder_FreeHostage::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}


