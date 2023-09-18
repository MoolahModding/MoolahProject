#include "SBZBTTask_Arrest.h"

USBZBTTask_Arrest::USBZBTTask_Arrest() {
    this->ArrestTime = 2.00f;
    this->AllowedDistance = 100.00f;
    this->AllowedStates = 1;
    this->BBTypeToArrest = ESBZArrestType::Criminal;
    this->NodeName = TEXT("Arrest");
}


