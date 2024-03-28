#include "SBZBlackMarketStoreItemButton.h"


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

void USBZBlackMarketStoreItemButton::GetItemCost(int32& Price, ESBZCurrencyCode& Currency) {
}

USBZBlackMarketStoreItemButton::USBZBlackMarketStoreItemButton() {
}

