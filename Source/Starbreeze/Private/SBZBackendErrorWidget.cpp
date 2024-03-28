#include "SBZBackendErrorWidget.h"

FText USBZBackendErrorWidget::GetErrorText() const {
    return FText::GetEmpty();
}

FText USBZBackendErrorWidget::GetErrorHeader() const {
    return FText::GetEmpty();
}

USBZBackendErrorWidget::USBZBackendErrorWidget() {
    this->ErrorMessageStringTable = NULL;
}

