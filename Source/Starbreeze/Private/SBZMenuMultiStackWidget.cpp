#include "SBZMenuMultiStackWidget.h"

USBZMenuMultiStackWidget::USBZMenuMultiStackWidget() {
    this->bHasStackFocus = false;
}

void USBZMenuMultiStackWidget::OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}





TArray<FName> USBZMenuMultiStackWidget::GetStackValues() const {
    return TArray<FName>();
}

FName USBZMenuMultiStackWidget::GetActiveStackValue() const {
    return NAME_None;
}


