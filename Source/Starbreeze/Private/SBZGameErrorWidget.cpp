#include "SBZGameErrorWidget.h"

void USBZGameErrorWidget::SetInternetConnected(ESBZServiceStatus ServiceStatus) {
}

FText USBZGameErrorWidget::GetErrorText() const {
    return FText::GetEmpty();
}

FText USBZGameErrorWidget::GetErrorHeader() const {
    return FText::GetEmpty();
}

USBZMenuButton* USBZGameErrorWidget::GetButton_ReturnToMainMenu() const {
    return NULL;
}

USBZGameErrorWidget::USBZGameErrorWidget() {
    this->Button_ReturnToMainMenu = NULL;
}

