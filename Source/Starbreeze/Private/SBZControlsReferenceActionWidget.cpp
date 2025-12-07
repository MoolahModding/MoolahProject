#include "SBZControlsReferenceActionWidget.h"

USBZControlsReferenceActionWidget::USBZControlsReferenceActionWidget() {
    this->Text_DisplayText = NULL;
    this->Panel_ActionInputLists = NULL;
    this->MaxActionInputsDisplayed = 2;
    this->ActionInputWidgetClass = NULL;
    this->HoldTimer = -1.00f;
}

void USBZControlsReferenceActionWidget::PressControlsReferenceAction() {
}

void USBZControlsReferenceActionWidget::OnTimerUpdated_Implementation() {
}

void USBZControlsReferenceActionWidget::OnTimerCompleted_Implementation() {
}

void USBZControlsReferenceActionWidget::OnInputAction(const FName ActionName) {
}

void USBZControlsReferenceActionWidget::OnHoldActionReleased_Implementation(const FName ActionName) {
}

void USBZControlsReferenceActionWidget::OnHoldActionPressed_Implementation(const FName ActionName) {
}

bool USBZControlsReferenceActionWidget::DisplayControlsReferenceWithEvent(const FSBZActionControlReference& InControlsReferenceAction, FOnControlsReferenceActionPressed InControlsReferenceActionPressedEvent) {
    return false;
}

void USBZControlsReferenceActionWidget::ClearControlReference() {
}


