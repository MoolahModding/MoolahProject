#include "SBZHUDHitIndicatorWidget.h"

USBZHUDHitIndicatorWidget::USBZHUDHitIndicatorWidget() {
    this->Image_HitIndicator = NULL;
    this->bIsUsedInHUD = false;
    this->EnemyHitAudioEvent = NULL;
    this->CriticalHitAudioEvent = NULL;
    this->EnemyKilledAudioEvent = NULL;
    this->EnemyCriticalKilledAudioEvent = NULL;
    this->NoDamageAudioEvent = NULL;
    this->ArmorHitAudioEvent = NULL;
    this->ArmorPenetrationAudioEvent = NULL;
    this->ArmorBreakAudioEvent = NULL;
}

void USBZHUDHitIndicatorWidget::PostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}


