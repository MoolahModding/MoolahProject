#include "SBZTimeEventManager.h"

USBZTimeEventManager::USBZTimeEventManager() {
}

void USBZTimeEventManager::RequestTimeEventCheck() {
}

float USBZTimeEventManager::GetNextResetTime() {
    return 0.0f;
}

FDateTime USBZTimeEventManager::GetLastKnownServerTime() const {
    return FDateTime{};
}

USBZTimeEventManager* USBZTimeEventManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


