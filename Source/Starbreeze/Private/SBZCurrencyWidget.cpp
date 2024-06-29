#include "SBZCurrencyWidget.h"

USBZCurrencyWidget::USBZCurrencyWidget() {
    this->CurrencyType = ESBZCurrencyCode::Cash;
    this->CurrencyValue = 0;
    this->bIsOwnerCurrency = true;
    this->bIsAffordedChecked = false;
    this->bIsAfforded = true;
}

void USBZCurrencyWidget::SetCurrencyValue(int32 InValue) {
}

void USBZCurrencyWidget::SetCurrencyType(ESBZCurrencyCode InCurrencyType) {
}





