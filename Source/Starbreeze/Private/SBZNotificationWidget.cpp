#include "SBZNotificationWidget.h"

USBZNotificationWidget::USBZNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BodyText = NULL;
}

void USBZNotificationWidget::SetupWidget(UTextBlock* InTextBlock) {
}

void USBZNotificationWidget::SetNotificationText(const FText& InTextToDisplay) {
}


