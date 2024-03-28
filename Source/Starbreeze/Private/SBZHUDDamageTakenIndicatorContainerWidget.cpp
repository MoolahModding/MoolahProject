#include "SBZHUDDamageTakenIndicatorContainerWidget.h"

void USBZHUDDamageTakenIndicatorContainerWidget::OnTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}

USBZHUDDamageTakenIndicatorContainerWidget::USBZHUDDamageTakenIndicatorContainerWidget() {
    this->DamageTakenWidgetClass = NULL;
    this->NumberOfDamageIndicators = 2;
    this->HealthDamageColorName = TEXT("HealthDamage");
    this->ArmorDamageColorName = TEXT("AttributeArmorColor");
    this->Panel_HUDDamageTakenContainer = NULL;
}

