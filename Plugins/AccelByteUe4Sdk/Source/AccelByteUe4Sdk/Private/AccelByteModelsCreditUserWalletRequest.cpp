#include "AccelByteModelsCreditUserWalletRequest.h"

FAccelByteModelsCreditUserWalletRequest::FAccelByteModelsCreditUserWalletRequest() {
    this->Amount = 0;
    this->Source = EAccelByteCreditUserWalletSource::PURCHASE;
    this->Origin = EAccelByteWalletTable::Playstation;
}

