#include "SBZLoadoutManager.h"

USBZLoadoutManager::USBZLoadoutManager() {
}

void USBZLoadoutManager::SetLoadoutAtIndex(int32 LoadoutIndex, const FSBZPlayerLoadoutConfig& InLoadoutConfig) {
}

ESBZMetaRequestResult USBZLoadoutManager::SetActiveLoadoutIndex(int32 ActiveLoadoutIndex) {
    return ESBZMetaRequestResult::Ok;
}

void USBZLoadoutManager::SendLoadoutName(const int32 LoadoutIndex, const FString& LoadoutName) {
}

TArray<FSBZPlayerLoadoutConfig> USBZLoadoutManager::GetPlayerLoadouts() {
    return TArray<FSBZPlayerLoadoutConfig>();
}

FString USBZLoadoutManager::GetLoadoutName(const int32 LoadoutIndex) const {
    return TEXT("");
}

USBZLoadoutManager* USBZLoadoutManager::GetLoadoutManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 USBZLoadoutManager::GetActiveLoadoutIndex() const {
    return 0;
}


