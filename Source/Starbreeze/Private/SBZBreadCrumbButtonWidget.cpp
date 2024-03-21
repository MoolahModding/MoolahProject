#include "SBZBreadCrumbButtonWidget.h"

void USBZBreadCrumbButtonWidget::SetStackValue(const FName& InStackValue, const FText& InTextValue) {
}

bool USBZBreadCrumbButtonWidget::IsBreadCrumbForStackValue(const FName& InStackValue) {
    return false;
}

USBZBreadCrumbButtonWidget::USBZBreadCrumbButtonWidget() {
    this->Text_Stack = NULL;
}

