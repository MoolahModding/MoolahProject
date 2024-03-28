#include "SBZCurrencyManager.h"

void USBZCurrencyManager::SubtractCurrency(ASBZPlayerState* SBZPlayerState, ESBZCurrencyCode Type, int32 Amount) {
}

void USBZCurrencyManager::SetCurrency(ESBZCurrencyCode Type, int32 Cost) {
}

int32 USBZCurrencyManager::GetCurrentAmount(ESBZCurrencyCode Type) const {
    return 0;
}

USBZCurrencyManager* USBZCurrencyManager::GetCurrencyManager(const UObject* WorldContextObject) {
    return NULL;
}

bool USBZCurrencyManager::CanAfford(ESBZCurrencyCode Type, int32 Cost) const {
    return false;
}

void USBZCurrencyManager::AddCurrency(ASBZPlayerState* SBZPlayerState, ESBZCurrencyCode Type, int32 Amount) {
}

USBZCurrencyManager::USBZCurrencyManager() {
    this->GetCurrencyRequestQueue = NULL;
}

