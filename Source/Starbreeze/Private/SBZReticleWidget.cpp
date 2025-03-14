#include "SBZReticleWidget.h"
#include "Components/SlateWrapperTypes.h"

USBZReticleWidget::USBZReticleWidget() {
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->ProgressionCurve = NULL;
    this->CurrentEquippableIndex = -1;
    this->CurrentWeapon = NULL;
    this->SpreadData = NULL;
    this->CurrentSpreadAngle = 1.00f;
}





