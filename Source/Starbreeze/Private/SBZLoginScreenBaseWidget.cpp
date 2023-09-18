#include "SBZLoginScreenBaseWidget.h"

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

void USBZLoginScreenBaseWidget::WidgetReady() {
}

void USBZLoginScreenBaseWidget::ShowTelemetryPopup() {
}

void USBZLoginScreenBaseWidget::ShowPrivacyPolicyPopup() {
}

void USBZLoginScreenBaseWidget::ShowGameSensePopup() {
}

void USBZLoginScreenBaseWidget::ShowEULAPopup() {
}

void USBZLoginScreenBaseWidget::ShowEpilepsyWarningPopup() {
}

void USBZLoginScreenBaseWidget::ShowCrossplayPopup() {
}



void USBZLoginScreenBaseWidget::SetLoadingCanvasPanelVisibility(ESlateVisibility InVisibility) {
}

void USBZLoginScreenBaseWidget::OnTelemetryPopUpClosed(FName ClosingActionName) {
}

void USBZLoginScreenBaseWidget::OnPrivacyPopUpClosed(FName ClosingActionName) {
}




void USBZLoginScreenBaseWidget::OnGameSensePopUpClosed(FName ClosingActionName) {
}

void USBZLoginScreenBaseWidget::OnEULAPopUpClosed(FName ClosingActionName) {
}

void USBZLoginScreenBaseWidget::OnEpilepsyPopUpClosed(FName ClosingActionName) {
}

void USBZLoginScreenBaseWidget::OnCrossplayPopUpClosed(FName ClosingActionName) {
}


void USBZLoginScreenBaseWidget::InitializeDone() {
}

UCanvasPanel* USBZLoginScreenBaseWidget::GetLoadingCanvasPanel() {
    return NULL;
}


