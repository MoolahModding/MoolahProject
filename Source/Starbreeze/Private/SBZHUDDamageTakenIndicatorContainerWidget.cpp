#include "SBZHUDDamageTakenIndicatorContainerWidget.h"

USBZHUDDamageTakenIndicatorContainerWidget::USBZHUDDamageTakenIndicatorContainerWidget() {
    this->DamageTakenWidgetClass = NULL;
    this->DamageTakenWidgetClass = NULL;
    this->NumberOfDamageIndicators = 2;
    this->HealthDamageColorName = TEXT("HealthDamage");
    this->ArmorDamageColorName = TEXT("AttributeArmorColor");
    this->Panel_HUDDamageTakenContainer = NULL;
}

void USBZHUDDamageTakenIndicatorContainerWidget::OnTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}


