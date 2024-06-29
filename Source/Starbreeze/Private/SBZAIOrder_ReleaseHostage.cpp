#include "SBZAIOrder_ReleaseHostage.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_ReleaseHostage::USBZAIOrder_ReleaseHostage() {
    this->Category = ESBZAIBehaviorCategory::Combat;
    this->bWasTraded = true;
}

void USBZAIOrder_ReleaseHostage::OnTargetHostageStateChanged(uint8 NewHostageState) {
}


