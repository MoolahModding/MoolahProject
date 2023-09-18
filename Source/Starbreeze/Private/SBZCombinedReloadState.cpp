#include "SBZCombinedReloadState.h"

FSBZCombinedReloadState::FSBZCombinedReloadState() {
    this->State = ESBZReloadState::None;
    this->bIsCycleNeeded = false;
}

