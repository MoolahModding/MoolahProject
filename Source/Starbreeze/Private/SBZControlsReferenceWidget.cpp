#include "SBZControlsReferenceWidget.h"

void USBZControlsReferenceWidget::NativeDisplayControlsReference(const FSBZControlsReference& InControlsReference) {
}


void USBZControlsReferenceWidget::HideActiveControlsReference() {
}


void USBZControlsReferenceWidget::DisplayActiveControlsReference(const FSBZControlsReference& InControlsReference) {
}

USBZControlsReferenceWidget::USBZControlsReferenceWidget() {
    this->MaxActionsDisplayed = 6;
    this->ControlsReferenceActionWidgetClass = NULL;
    this->ControlsReferenceAxisWidgetClass = NULL;
    this->Panel_ActionLists = NULL;
    this->Panel_AxisLists = NULL;
}

