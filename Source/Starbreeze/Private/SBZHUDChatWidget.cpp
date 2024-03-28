#include "SBZHUDChatWidget.h"



void USBZHUDChatWidget::SetChatActive(bool bSetActive) {
}



void USBZHUDChatWidget::OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}



void USBZHUDChatWidget::OnPlayerDefeatStateChangedInternal(const FSBZPlayerDefeatStateChangedData& InData) {
}


void USBZHUDChatWidget::OnMessageReceived(const FSBZPlayerChatEvent& ChatEventData) {
}







USBZHUDChatWidget::USBZHUDChatWidget() {
    this->ChatStackValue = TEXT("Chat");
    this->Text_InputText = NULL;
    this->bIsChatInputActive = false;
    this->bIsChatDisabled = false;
}

