#include "SBZMenuStackWidget.h"

void USBZMenuStackWidget::OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}





FName USBZMenuStackWidget::GetStackValue() const {
    return NAME_None;
}

USBZMenuStackWidget::USBZMenuStackWidget() {
    this->StackValue = TEXT("Default__SBZMenuStackWidget");
    this->bHasStackFocus = false;
    this->bIsOnStack = false;
}

