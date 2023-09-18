#include "SBZMenuStackScreenWidget.h"

USBZMenuStackScreenWidget::USBZMenuStackScreenWidget() {
    this->bShouldListenForUIBackEvent = true;
    this->bPopStackOnBackPressed = true;
    this->BackActionName = TEXT("UI_Cancel");
    this->StackValue = TEXT("Default__SBZMenuStackScreenWidget");
}


void USBZMenuStackScreenWidget::NativeOnBackPressed() {
}


