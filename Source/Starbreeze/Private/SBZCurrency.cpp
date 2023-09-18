#include "SBZCurrency.h"

FSBZCurrency::FSBZCurrency() {
    this->CurrencyType = ESBZCurrencyCode::Cash;
    this->Amount = 0;
    this->LifetimeAmount = 0;
}

