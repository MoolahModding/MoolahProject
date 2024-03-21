#include "SBZMenuStackScreenWidget.h"


void USBZMenuStackScreenWidget::NativeOnBackPressed() {
}

USBZMenuStackScreenWidget::USBZMenuStackScreenWidget() {
    this->bShouldListenForUIBackEvent = true;
    this->bPopStackOnBackPressed = true;
    this->BackActionName = TEXT("UI_Cancel");
}

