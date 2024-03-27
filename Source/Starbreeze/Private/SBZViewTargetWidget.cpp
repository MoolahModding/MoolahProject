#include "SBZViewTargetWidget.h"



void USBZViewTargetWidget::OnSecurityCameraStateChanged(ESBZCameraState OldState, ESBZCameraState NewState) {
}

void USBZViewTargetWidget::OnSecurityCameraRuntimeStateChanged(uint8 NewState) {
}



USBZViewTargetWidget::USBZViewTargetWidget() {
    this->ViewTargetActor = NULL;
}

