#include "SBZMainMenuCredits.h"

USBZMainMenuCredits::USBZMainMenuCredits() {
    this->StackValue = TEXT("Default__SBZMainMenuCredits");
    this->CreditsDataTable = NULL;
    this->TypeWidgets[0] = NULL;
    this->TypeWidgets[1] = NULL;
    this->TypeWidgets[2] = NULL;
    this->TypeWidgets[3] = NULL;
    this->TypeWidgets[4] = NULL;
    this->TypeWidgets[5] = NULL;
    this->TypeWidgets[6] = NULL;
    this->StartOffsetSize = 1080.00f;
    this->EndOffsetSize = 1080.00f;
    this->ScrollSpeed = 100.00f;
    this->ScrollSpeedMultiplier = 3.00f;
    this->AxisDeadZone = 0.10f;
    this->ScrollCredits = NULL;
    this->ContentBox = NULL;
}


