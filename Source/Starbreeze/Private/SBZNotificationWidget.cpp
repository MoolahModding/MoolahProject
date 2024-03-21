#include "SBZNotificationWidget.h"

void USBZNotificationWidget::SetupWidget(UTextBlock* InTextBlock) {
}

void USBZNotificationWidget::SetNotificationText(const FText& InTextToDisplay) {
}

USBZNotificationWidget::USBZNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BodyText = NULL;
}

