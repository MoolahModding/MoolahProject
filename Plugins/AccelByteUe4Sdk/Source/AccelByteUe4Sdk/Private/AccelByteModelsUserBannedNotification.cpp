#include "AccelByteModelsUserBannedNotification.h"

FAccelByteModelsUserBannedNotification::FAccelByteModelsUserBannedNotification() {
    this->Ban = EBanType::EMPTY;
    this->Reason = EBanReason::EMPTY;
    this->Enable = false;
}

