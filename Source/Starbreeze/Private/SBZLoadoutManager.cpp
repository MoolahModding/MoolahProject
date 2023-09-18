#include "SBZLoadoutManager.h"

USBZLoadoutManager::USBZLoadoutManager() {
}

void USBZLoadoutManager::SetLoadoutAtIndex(int32 LoadoutIndex, const FSBZPlayerLoadoutConfig& InLoadoutConfig) {
}

ESBZMetaRequestResult USBZLoadoutManager::SetActiveLoadoutIndex(int32 ActiveLoadoutIndex) {
    return ESBZMetaRequestResult::Ok;
}

TArray<FSBZPlayerLoadoutConfig> USBZLoadoutManager::GetPlayerLoadouts() {
    return TArray<FSBZPlayerLoadoutConfig>();
}

USBZLoadoutManager* USBZLoadoutManager::GetLoadoutManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 USBZLoadoutManager::GetActiveLoadoutIndex() const {
    return 0;
}


