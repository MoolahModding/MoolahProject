#include "PD3MaskOnNotificationWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3MaskOnNotificationWidget::UPD3MaskOnNotificationWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->bIsPuttingOnMask = false;
}



float UPD3MaskOnNotificationWidget::GetMaskOnProgress() const {
    return 0.0f;
}


