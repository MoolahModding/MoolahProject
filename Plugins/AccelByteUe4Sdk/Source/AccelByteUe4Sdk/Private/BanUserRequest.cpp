#include "BanUserRequest.h"

FBanUserRequest::FBanUserRequest() {
    this->Ban = EBanType::EMPTY;
    this->Reason = EBanReason::EMPTY;
    this->SkipNotif = false;
}

