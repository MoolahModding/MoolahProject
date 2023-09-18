#include "SBZAIOrder_SecureBag.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_SecureBag::USBZAIOrder_SecureBag() {
    this->DropOfBagActionOrder = NULL;
    this->BagActor = NULL;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->Category = ESBZAIBehaviorCategory::Suspiscious;
}

void USBZAIOrder_SecureBag::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}


