#include "SBZMaskOfTheWeekWidget.h"

USBZMaskOfTheWeekWidget::USBZMaskOfTheWeekWidget() {
    this->TimerUpdateFrequency = 1.00f;
    this->TimeEventManager = NULL;
}

void USBZMaskOfTheWeekWidget::UpdateData() {
}




FTimespan USBZMaskOfTheWeekWidget::GetTimeRemainingUntilReset() {
    return FTimespan{};
}


