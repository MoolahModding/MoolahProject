#include "TOPWorkResultObject.h"

FTOPWorkResultObject::FTOPWorkResultObject() {
    this->State = EPDGWorkResultState::None;
    this->WorkItemResultInfoIndex = 0;
    this->bAutoBakedSinceLastLoad = false;
}

