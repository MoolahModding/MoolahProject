#include "SBZAIOrder_FreeHostage.h"

void USBZAIOrder_FreeHostage::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}

USBZAIOrder_FreeHostage::USBZAIOrder_FreeHostage() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->ReleaseHostageOrder = NULL;
    this->TiedHostage = NULL;
}

