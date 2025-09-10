#include "SBZPopupWidget.h"

USBZPopupWidget::USBZPopupWidget() {
    this->Text_Header = NULL;
    this->Text_Description = NULL;
    this->Widget_ControlsReference = NULL;
    this->CanvasPanel_PopUpBody = NULL;
    this->bIsShowing = false;
    this->WidgetBody = NULL;
}

void USBZPopupWidget::SetControlsReference(const FSBZButtonControlsReference& InControlsReference, int32 InCountdownTime, FName InCountdownActionName, bool bInputsClosePopup) {
}


void USBZPopupWidget::OnActionPressed(FName ActionName) {
}

bool USBZPopupWidget::IsShowing() const {
    return false;
}

void USBZPopupWidget::HidePopUpWidget(FName ActionName) {
}

void USBZPopupWidget::AdvanceCountdown() {
}


