#include "SBZUIChatBaseWidget.h"

void USBZUIChatBaseWidget::SendMessage(const FSBZChatMessage& InMessage) {
}

void USBZUIChatBaseWidget::OnNewMessageReceived(const FSBZChatMessage& InChatMessage) {
}


FString USBZUIChatBaseWidget::GetUserId() {
    return TEXT("");
}

FString USBZUIChatBaseWidget::GetUserDisplayName() {
    return TEXT("");
}

FString USBZUIChatBaseWidget::CreateTimestamp() const {
    return TEXT("");
}

USBZUIChatBaseWidget::USBZUIChatBaseWidget() {
    this->bEnableLobbyChat = false;
    this->bIsChatDisabled = false;
    this->bIsOnWindows = false;
    this->GameUserSettings = NULL;
    this->Chat = NULL;
}

