#include "SBZBlackMarketStoreItemButton.h"

USBZBlackMarketStoreItemButton::USBZBlackMarketStoreItemButton() {
}


bool USBZBlackMarketStoreItemButton::IsTransactionInProgress() const {
    return false;
}

void USBZBlackMarketStoreItemButton::InitializeStoreData(const FSBZStoreItemUIData& InStoreItemUIData) {
}

FGuid USBZBlackMarketStoreItemButton::GetItemID() const {
    return FGuid{};
}

USBZInventoryBaseData* USBZBlackMarketStoreItemButton::GetItemData() const {
    return NULL;
}

void USBZBlackMarketStoreItemButton::GetItemCost(int64& Price, ESBZCurrencyCode& Currency) {
}


