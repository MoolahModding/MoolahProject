#include "SBZPingWidget.h"



USBZPingWidget::USBZPingWidget() {
    this->TimeBetweenUpdates = 1.00f;
    this->HighThreshold = 100;
    this->CriticalThreshold = 200;
    this->PlayerState = NULL;
    this->bIsPingAllowed = true;
}

