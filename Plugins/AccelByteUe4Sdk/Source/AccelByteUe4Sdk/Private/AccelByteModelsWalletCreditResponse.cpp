#include "AccelByteModelsWalletCreditResponse.h"

FAccelByteModelsWalletCreditResponse::FAccelByteModelsWalletCreditResponse() {
    this->Balance = 0;
    this->TotalPermanentBalance = 0;
    this->TotalTimeLimitedBalance = 0;
    this->Status = EAccelByteItemStatus::NONE;
}

