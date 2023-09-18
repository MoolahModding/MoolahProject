#include "SBZBTService_LookAround.h"

USBZBTService_LookAround::USBZBTService_LookAround() {
    this->LookAroundTime = 5.00f;
    this->WaitTimeBetweenRotations = 2.00f;
    this->MaximumRotationAngle = 30.00f;
    this->FocusPriority = 0;
    this->NodeName = TEXT("Look Around");
}


