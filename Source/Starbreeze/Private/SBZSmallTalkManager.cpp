#include "SBZSmallTalkManager.h"

void USBZSmallTalkManager::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

USBZSmallTalkManager::USBZSmallTalkManager() {
    this->MaxIterationPerTick = 30;
    this->MaxSearchDistance = 1500.00f;
    this->CullingDistance = 2000.00f;
    this->MaxDistBetweenConversationPerformers = 120.00f;
    this->MinAngleBetweenConversationPerformers = 80.00f;
    this->MaxConcurrentPhone = 20;
    this->MaxConcurrentSolo = 2;
    this->MaxConcurrentConversation = 20;
}

