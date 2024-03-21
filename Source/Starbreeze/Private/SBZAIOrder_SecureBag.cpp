#include "SBZAIOrder_SecureBag.h"

void USBZAIOrder_SecureBag::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}

USBZAIOrder_SecureBag::USBZAIOrder_SecureBag() {
    this->DropOfBagActionOrder = NULL;
    this->BagActor = NULL;
    this->BlackboardKey = TEXT("MoveToLocation");
}

