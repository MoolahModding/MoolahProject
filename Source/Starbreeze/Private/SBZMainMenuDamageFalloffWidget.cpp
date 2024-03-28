#include "SBZMainMenuDamageFalloffWidget.h"

void USBZMainMenuDamageFalloffWidget::SetFireData(const USBZPlayerWeaponFireData* InFireData) {
}

USBZMainMenuDamageFalloffWidget::USBZMainMenuDamageFalloffWidget() {
    this->bIncludeCritDamage = true;
    this->MaxDisplayDistance = 5000.00f;
    this->DisplayStepDistance = 500.00f;
    this->FireData = NULL;
}

