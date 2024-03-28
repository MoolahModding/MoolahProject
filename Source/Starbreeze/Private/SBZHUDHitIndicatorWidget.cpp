#include "SBZHUDHitIndicatorWidget.h"

void USBZHUDHitIndicatorWidget::PostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}

USBZHUDHitIndicatorWidget::USBZHUDHitIndicatorWidget() {
    this->Image_HitIndicator = NULL;
    this->EnemyHitAudioEvent = NULL;
    this->CriticalHitAudioEvent = NULL;
    this->EnemyKilledAudioEvent = NULL;
    this->EnemyCriticalKilledAudioEvent = NULL;
    this->NoDamageAudioEvent = NULL;
    this->ArmorHitAudioEvent = NULL;
    this->ArmorPenetrationAudioEvent = NULL;
    this->ArmorBreakAudioEvent = NULL;
}

