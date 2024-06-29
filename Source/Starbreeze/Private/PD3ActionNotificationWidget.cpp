#include "PD3ActionNotificationWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ActionNotificationWidget::UPD3ActionNotificationWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->Text_ActionText = NULL;
    this->FadeOutAnimation = NULL;
}

void UPD3ActionNotificationWidget::OnRevive(const FSBZReviveEvent& ReviveEventData) {
}


void UPD3ActionNotificationWidget::OnAICharacterKilled(ASBZCharacter* Character) {
}


void UPD3ActionNotificationWidget::AddNotification(const FSBZHUDNotificationData& HUDNotification) {
}


