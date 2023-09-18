#include "BanUserResponse.h"

FBanUserResponse::FBanUserResponse() {
    this->Enabled = false;
    this->Reason = EBanReason::EMPTY;
}

