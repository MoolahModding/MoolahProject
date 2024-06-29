#include "SBZMenuStackWidget.h"

USBZMenuStackWidget::USBZMenuStackWidget() {
    this->StackValue = TEXT("Default__SBZMenuStackWidget");
    this->bHasStackFocus = false;
    this->bIsOnStack = false;
}

void USBZMenuStackWidget::OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}





FName USBZMenuStackWidget::GetStackValue() const {
    return NAME_None;
}


