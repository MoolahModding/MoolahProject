#include "SBZPingWidget.h"
#include "Components/SlateWrapperTypes.h"

USBZPingWidget::USBZPingWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->TimeBetweenUpdates = 1.00f;
    this->HighThreshold = 100;
    this->CriticalThreshold = 200;
    this->PlayerState = NULL;
    this->bIsPingAllowed = true;
}




