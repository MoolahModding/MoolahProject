#include "SBZMenuStackScreenWidget.h"

USBZMenuStackScreenWidget::USBZMenuStackScreenWidget() {
    this->StackValue = TEXT("Default__SBZMenuStackScreenWidget");
    this->bShouldListenForUIBackEvent = true;
    this->bPopStackOnBackPressed = true;
    this->BackActionName = TEXT("UI_Cancel");
}


void USBZMenuStackScreenWidget::NativeOnBackPressed() {
}


