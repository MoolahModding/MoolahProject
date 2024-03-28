#include "SBZLoginScreenBaseWidget.h"

void USBZLoginScreenBaseWidget::WidgetReady() {
}

void USBZLoginScreenBaseWidget::ShowPrivacyPolicyPopup() {
}

void USBZLoginScreenBaseWidget::ShowEULAPopup() {
}

void USBZLoginScreenBaseWidget::ShowEpilepsyWarningPopup() {
}



void USBZLoginScreenBaseWidget::SetLoadingCanvasPanelVisibility(ESlateVisibility InVisibility) {
}

void USBZLoginScreenBaseWidget::OnPrivacyPopUpClosed(FName ClosingActionName) {
}




void USBZLoginScreenBaseWidget::OnEULAPopUpClosed(FName ClosingActionName) {
}

void USBZLoginScreenBaseWidget::OnEpilepsyPopUpClosed(FName ClosingActionName) {
}


void USBZLoginScreenBaseWidget::InitializeDone() {
}

UCanvasPanel* USBZLoginScreenBaseWidget::GetLoadingCanvasPanel() {
    return NULL;
}

USBZLoginScreenBaseWidget::USBZLoginScreenBaseWidget() {
    this->bRememeberDetails = false;
    this->LoadingThrobber = NULL;
    this->LoadingCanvasPanel = NULL;
    this->LoginScreen = NULL;
    this->LogoP3 = NULL;
    this->ClickToStartButton = NULL;
    this->ClickToStartOverlay = NULL;
    this->bIsWidgetReady = false;
}

