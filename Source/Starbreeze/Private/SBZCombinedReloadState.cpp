#include "SBZCombinedReloadState.h"

FSBZCombinedReloadState::FSBZCombinedReloadState() {
    this->State = ESBZReloadState::None;
    this->bIsEmptyCycleNeeded = false;
    this->bIsCycleNeeded = false;
}

