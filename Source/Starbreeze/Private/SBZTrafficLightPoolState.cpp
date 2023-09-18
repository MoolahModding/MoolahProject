#include "SBZTrafficLightPoolState.h"

FSBZTrafficLightPoolState::FSBZTrafficLightPoolState() {
    this->Status = ESBZTrafficLightStatus::FullOff;
    this->Timer = 0.00f;
}

