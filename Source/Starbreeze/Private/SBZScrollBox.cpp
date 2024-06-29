#include "SBZScrollBox.h"

USBZScrollBox::USBZScrollBox() {
    this->InputComponent = NULL;
    this->InputAxisYName = TEXT("UI_InputYAxis");
    this->ScrollSpeedY = 1000.00f;
    this->InputAxisDeadZone = 0.10f;
    this->bIsCustomFocus = false;
}

void USBZScrollBox::SetCustomFocus(bool bInIsCustomFocus) {
}


