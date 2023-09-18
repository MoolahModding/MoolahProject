#include "SBZSocialChatBaseWidget.h"

USBZSocialChatBaseWidget::USBZSocialChatBaseWidget() {
    this->bEnablePartyMessageNotification = true;
    this->bEnablePrivateMessageNotification = true;
    this->bEnablePublicMessageNotification = false;
    this->DisplayOption = ESBZChatWidgetDisplayType::Disabled;
    this->Channel = ESBZChatChannelType::Private;
    this->ChatMessageEvent = NULL;
    this->ChannelText = NULL;
    this->ChatReceiver = NULL;
    this->ChatText = NULL;
    this->PublicChannelChatScrollBox = NULL;
    this->PrivateChannelChatScrollBox = NULL;
    this->PartyChannelChatScrollBox = NULL;
    this->ChatBorder = NULL;
    this->ChannelsChatMessageBorder = NULL;
    this->ChannelsBorder = NULL;
    this->ChatInputBorder = NULL;
    this->ChatButtonBorder = NULL;
    this->bIsChatDisabled = false;
    this->bJoinedPublicChannel = false;
}

ESBZChatChannelType USBZSocialChatBaseWidget::ToggleChannel() {
    return ESBZChatChannelType::None;
}

void USBZSocialChatBaseWidget::SetChannelFocus(ESBZChatChannelType InChannel) {
}

void USBZSocialChatBaseWidget::SendPublicMessage(const FString& Message) {
}

void USBZSocialChatBaseWidget::SendPrivateMessage(const FString& NewUserId, const FString& Message) {
}

void USBZSocialChatBaseWidget::SendPartyMessage(const FString& Message) {
}


void USBZSocialChatBaseWidget::OnPublicMessageSentStatus(bool bResult, const FString& Message, const FString& NewUserId, const FString& RoomId) {
}

void USBZSocialChatBaseWidget::OnPublicMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message) {
}

void USBZSocialChatBaseWidget::OnPrivateMessageSentStatus(bool bResult, const FString& Message, const FString& NewUserId, const FString& RoomId) {
}

void USBZSocialChatBaseWidget::OnPrivateMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId) {
}

void USBZSocialChatBaseWidget::OnPartyMessageSentStatus(bool bResult, const FString& Message, const FString& NewUserId, const FString& RoomId) {
}

void USBZSocialChatBaseWidget::OnPartyMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId) {
}

void USBZSocialChatBaseWidget::OnPartyInfoUpdateEvent() {
}

void USBZSocialChatBaseWidget::OnOpenPressed() {
}



void USBZSocialChatBaseWidget::OnClosePressed() {
}


void USBZSocialChatBaseWidget::OnChatChannelJoinEvent(const FString& ChannelSlug) {
}


void USBZSocialChatBaseWidget::GetChannelColor(ESBZChatChannelType InChannel, FSlateColor& Color) const {
}


