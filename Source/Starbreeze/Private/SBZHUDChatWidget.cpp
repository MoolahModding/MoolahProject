#include "SBZHUDChatWidget.h"

USBZHUDChatWidget::USBZHUDChatWidget() {
    this->ChatStackValue = TEXT("Chat");
    this->Text_InputText = NULL;
    this->ShortenTextMaxLines = 30;
    this->bIsChatInputActive = false;
    this->bIsChatDisabled = false;
}



void USBZHUDChatWidget::SetChatActive(bool bSetActive) {
}



void USBZHUDChatWidget::OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}



void USBZHUDChatWidget::OnPlayerDefeatStateChangedInternal(const FSBZPlayerDefeatStateChangedData& InData) {
}


void USBZHUDChatWidget::OnPingReceived(const FSBZPlayerPingEvent& PingEventData) {
}

void USBZHUDChatWidget::OnMessageReceived(const FSBZPlayerChatEvent& ChatEventData) {
}

void USBZHUDChatWidget::OnCloseChatReceived() {
}





FText USBZHUDChatWidget::GetShortenText(const FText& InText) {
    return FText::GetEmpty();
}




