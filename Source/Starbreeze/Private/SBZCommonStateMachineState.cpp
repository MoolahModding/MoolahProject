#include "SBZCommonStateMachineState.h"

USBZCommonStateMachineState::USBZCommonStateMachineState() {
    this->AsyncLoadingTimeOutTime = 300.00f;
    this->AsyncLoadingTimeSliceOverride = 33.00f;
    this->AsyncLoadingTimeSliceDefaultValue = 5.00f;
    this->bReplayEnabled = false;
}


