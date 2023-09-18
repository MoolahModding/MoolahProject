#include "SBZDefeatStateChangedData.h"

FSBZDefeatStateChangedData::FSBZDefeatStateChangedData() {
    this->OldDefeatState = EPD3DefeatState::None;
    this->NewDefeatState = EPD3DefeatState::None;
    this->bIsInitialDefeatStateChange = false;
}

