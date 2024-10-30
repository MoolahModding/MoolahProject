#include "SBZCurrencyManager.h"

USBZCurrencyManager::USBZCurrencyManager() {
    this->GetCurrencyRequestQueue = NULL;
}

void USBZCurrencyManager::SubtractCurrency(ASBZPlayerState* SBZPlayerState, ESBZCurrencyCode Type, int64 Amount) {
}

void USBZCurrencyManager::SetCurrency(ESBZCurrencyCode Type, int64 Cost) {
}

int64 USBZCurrencyManager::GetCurrentAmount(ESBZCurrencyCode Type) const {
    return 0;
}

USBZCurrencyManager* USBZCurrencyManager::GetCurrencyManager(const UObject* WorldContextObject) {
    return NULL;
}

bool USBZCurrencyManager::CanAfford(ESBZCurrencyCode Type, int64 Cost) const {
    return false;
}

void USBZCurrencyManager::AddCurrency(ASBZPlayerState* SBZPlayerState, ESBZCurrencyCode Type, int64 Amount) {
}


