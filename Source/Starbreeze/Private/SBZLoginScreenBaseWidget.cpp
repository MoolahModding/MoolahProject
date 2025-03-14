#include "SBZLoginScreenBaseWidget.h"

USBZLoginScreenBaseWidget::USBZLoginScreenBaseWidget() {
    this->bRememeberDetails = false;
    this->LoadingThrobber = NULL;
    this->LoadingCanvasPanel = NULL;
    this->LoginScreen = NULL;
    this->LogoP3 = NULL;
    this->ClickToStartButton = NULL;
    this->ClickToStartOverlay = NULL;
    this->LoadProgressionBar = NULL;
    this->bIsWidgetReady = false;
}

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



void USBZLoginScreenBaseWidget::OnLoadProgressionUpdate(int32 CurrentProgress, int32 MaxProgress) {
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


