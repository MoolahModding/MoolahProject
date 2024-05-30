#include "SBZStoreManager.h"

USBZStoreManager::USBZStoreManager() {
}

USBZStoreManager* USBZStoreManager::GetStoreManagerChecked(const UObject* WorldContextObject) {
    return NULL;
}

USBZStoreManager* USBZStoreManager::GetStoreManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 USBZStoreManager::GetMaxPriceProgressionLevel(const FString& PriceProgressionGroup) {
    return 0;
}

int32 USBZStoreManager::GetInfamyLevelItemUnlockCount(int32 InfamyLevel) const {
    return 0;
}

FSBZMaskMouldStoreItem USBZStoreManager::GetCurrentMaskOfTheWeekStoreItem() const {
    return FSBZMaskMouldStoreItem{};
}


