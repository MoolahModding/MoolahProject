#include "SBZBlackMarketStoreItemButton.h"

USBZBlackMarketStoreItemButton::USBZBlackMarketStoreItemButton() {
}

void USBZBlackMarketStoreItemButton::RequestOpenItemInPlatformStore() {
}


bool USBZBlackMarketStoreItemButton::IsTransactionInProgress() const {
    return false;
}

void USBZBlackMarketStoreItemButton::InitializeStoreData(const FSBZStoreItemUIData& InStoreItemUIData) {
}

FString USBZBlackMarketStoreItemButton::GetItemSku() const {
    return TEXT("");
}

USBZInventoryBaseData* USBZBlackMarketStoreItemButton::GetItemData() const {
    return NULL;
}

void USBZBlackMarketStoreItemButton::GetItemCost(int64& Price, ESBZCurrencyCode& Currency) {
}


