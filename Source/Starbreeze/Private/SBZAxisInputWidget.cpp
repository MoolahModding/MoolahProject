#include "SBZAxisInputWidget.h"

void USBZAxisInputWidget::SetAxis(FName InAxisName) {
}

USBZAxisInputWidget::USBZAxisInputWidget() {
    this->PrimaryKeyWidget = NULL;
    this->SecondaryKeyWidget = NULL;
    this->SecondaryKeyDisableVisibility = ESlateVisibility::Hidden;
}

