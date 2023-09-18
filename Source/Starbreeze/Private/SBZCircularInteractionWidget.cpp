#include "SBZCircularInteractionWidget.h"

USBZCircularInteractionWidget::USBZCircularInteractionWidget() {
    this->MouseSensitivity = 1.00f;
    this->Deadzone = 0.50f;
    this->bSelectOnClose = true;
    this->NumSlices = 6;
    this->Angle = 0.00f;
    this->AngleRad = 0.00f;
    this->SliceAngle = 0.00f;
    this->ActiveIndex = 0;
    this->bIsActive = false;
    this->bIsUsingController = false;
}

void USBZCircularInteractionWidget::UpdateNumSlices(int32 InNumSlices) {
}

void USBZCircularInteractionWidget::SelectCurrentIndex() {
}



void USBZCircularInteractionWidget::ActivateCircularWidget(bool bShouldActive) {
}


