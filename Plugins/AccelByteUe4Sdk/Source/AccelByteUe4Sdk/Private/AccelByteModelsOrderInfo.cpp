#include "AccelByteModelsOrderInfo.h"

FAccelByteModelsOrderInfo::FAccelByteModelsOrderInfo() {
    this->Sandbox = false;
    this->Quantity = 0;
    this->Price = 0;
    this->DiscountedPrice = 0;
    this->Vat = 0;
    this->SalesTax = 0;
    this->PaymentProviderFee = 0;
    this->PaymentMethodFee = 0;
    this->Status = EAccelByteOrderStatus::NONE;
}

