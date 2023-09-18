#include "SBZPreplanningAssetManager.h"

USBZPreplanningAssetManager::USBZPreplanningAssetManager() {
}

USBZPreplanningAssetManager* USBZPreplanningAssetManager::GetPreplanningAssetManager(UObject* WorldContextObject) {
    return NULL;
}

USBZPreplanningAssetData* USBZPreplanningAssetManager::GetAssetBySku(const FString& InAssetSku) const {
    return NULL;
}

void USBZPreplanningAssetManager::ConsumeUserEntitlementSuccess(ESBZMetaRequestResult Result) {
}

void USBZPreplanningAssetManager::ConsumeUserEntitlementError(ESBZMetaRequestResult Result) {
}


