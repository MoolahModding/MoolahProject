#include "SBZTrafficControl.h"

FSBZTrafficControl::FSBZTrafficControl() {
    this->Vehicle = NULL;
    this->ControlType = ESBZTrafficVehicleControlType::StopAtDistance;
    this->Value = 0.00f;
    this->ServerSpeed = 0.00f;
    this->TraveledDistance = 0.00f;
}

