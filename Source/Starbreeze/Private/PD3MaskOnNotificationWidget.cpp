#include "PD3MaskOnNotificationWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3MaskOnNotificationWidget::UPD3MaskOnNotificationWidget() {
    this->bIsPuttingOnMask = false;
    this->Visibility = ESlateVisibility::Collapsed;
}



float UPD3MaskOnNotificationWidget::GetMaskOnProgress() const {
    return 0.0f;
}


