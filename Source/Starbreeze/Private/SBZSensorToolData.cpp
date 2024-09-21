#include "SBZSensorToolData.h"

USBZSensorToolData::USBZSensorToolData() {
    this->MaxMarkableTargets = 3;
    this->MaxVisibleTargets = 10;
    this->MaxDistance = 1000.00f;
    this->SensorToolDOFFeedback = NULL;
    this->MarkedOutline = NULL;
    this->SensorAimDegreePadding = 4.00f;
    this->DefaultAmmoCost = 1.00f;
    this->DefaultSensoryMarkingDuration = 10.00f;
    this->ScanLineTime = 0.30f;
}


