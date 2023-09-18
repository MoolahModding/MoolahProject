#include "SBZControlsReferenceActionWidget.h"

USBZControlsReferenceActionWidget::USBZControlsReferenceActionWidget() {
    this->Text_DisplayText = NULL;
    this->Panel_ActionInputLists = NULL;
    this->MaxActionInputsDisplayed = 2;
    this->ActionInputWidgetClass = NULL;
    this->ActionInputWidgetClass = NULL;
}

void USBZControlsReferenceActionWidget::PressControlsReferenceAction() {
}

void USBZControlsReferenceActionWidget::OnInputAction(const FName ActionName) {
}

bool USBZControlsReferenceActionWidget::DisplayControlsReferenceWithEvent(const FSBZActionControlReference& InControlsReferenceAction, FOnControlsReferenceActionPressed InControlsReferenceActionPressedEvent) {
    return false;
}

void USBZControlsReferenceActionWidget::ClearControlReference() {
}


