#include "SBZTrafficVehicleInfo.h"

FSBZTrafficVehicleInfo::FSBZTrafficVehicleInfo() {
    this->Vehicle = NULL;
    this->VehicleType = ESBZTrafficVehicleType::FirstResponder;
    this->WantedCruisingSpeed = 0.00f;
    this->WantedTurnCruisingSpeed = 0.00f;
    this->WantedAcceleration = 0.00f;
    this->WantedDeceleration = 0.00f;
    this->CurrentCruisingSpeed = 0.00f;
    this->CurrentAcceleration = 0.00f;
    this->CurrentDeceleration = 0.00f;
    this->bIsBraking = false;
    this->bStopped = false;
}

