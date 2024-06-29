#include "SBZBlackMarketInspectWidget.h"

USBZBlackMarketInspectWidget::USBZBlackMarketInspectWidget() {
    this->StackValue = TEXT("Default__SBZBlackMarketInspectWidget");
    this->CurrentInspectData = NULL;
    this->ZoomSpeedRatio = 0.10f;
    this->ZoomMax = 0.00f;
    this->ZoomMin = -10.00f;
    this->ZoomInputAxisName = TEXT("UI_InspectZoomAxis");
    this->ZoomCameraRotationInputAxisName = TEXT("UI_CircularInteractionYAxis");
    this->AxisDeadZone = 0.10f;
    this->InspectCamera = NULL;
    this->LoadoutEquippedGloveData = NULL;
    this->MaxZoomCameraPitch = 1.50f;
    this->MinZoomCameraPitch = -3.00f;
}

void USBZBlackMarketInspectWidget::SetInspectCamera(FName CameraName) {
}

void USBZBlackMarketInspectWidget::SetGlovesOnMannequin(const USBZGloveData* GloveData) {
}




