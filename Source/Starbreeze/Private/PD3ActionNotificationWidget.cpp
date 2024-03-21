#include "PD3ActionNotificationWidget.h"

void UPD3ActionNotificationWidget::OnRevive(const FSBZReviveEvent& ReviveEventData) {
}


void UPD3ActionNotificationWidget::HandleTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}


void UPD3ActionNotificationWidget::AddNotification(const FSBZHUDNotificationData& HUDNotification) {
}

UPD3ActionNotificationWidget::UPD3ActionNotificationWidget() {
    this->Text_ActionText = NULL;
    this->FadeOutAnimation = NULL;
}

