#include "SBZMenuMultiStackWidget.h"

void USBZMenuMultiStackWidget::OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}





TArray<FName> USBZMenuMultiStackWidget::GetStackValues() const {
    return TArray<FName>();
}

FName USBZMenuMultiStackWidget::GetActiveStackValue() const {
    return NAME_None;
}

USBZMenuMultiStackWidget::USBZMenuMultiStackWidget() {
    this->bHasStackFocus = false;
}

