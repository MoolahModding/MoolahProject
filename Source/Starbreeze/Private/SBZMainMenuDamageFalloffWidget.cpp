#include "SBZMainMenuDamageFalloffWidget.h"

USBZMainMenuDamageFalloffWidget::USBZMainMenuDamageFalloffWidget() {
    this->bIncludeCritDamage = true;
    this->MaxDisplayDistance = 5000.00f;
    this->DisplayStepDistance = 500.00f;
    this->FireData = NULL;
}

void USBZMainMenuDamageFalloffWidget::SetFireData(const USBZPlayerWeaponFireData* InFireData) {
}


