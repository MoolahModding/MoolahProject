#include "SBZReticleWidget.h"




USBZReticleWidget::USBZReticleWidget() {
    this->ProgressionCurve = NULL;
    this->SpreadMod = 0.00f;
    this->CurrentEquippableIndex = -1;
    this->MaxSpreadAngle = 10.00f;
    this->CurrentWeapon = NULL;
    this->SpreadData = NULL;
    this->CurrentScale = 1.00f;
}

