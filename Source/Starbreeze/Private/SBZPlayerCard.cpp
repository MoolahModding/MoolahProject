#include "SBZPlayerCard.h"

USBZPlayerCard::USBZPlayerCard() {
    this->CardType = ESBZSocialPlayerCardType::AccelByteFriend;
    this->CurrentFeedbackType = ESBZRequestFeedbackType::AcceptFriendRequest;
    this->PlayerCardContainer = NULL;
}

void USBZPlayerCard::OnRequestStatusPopupClosed(FName ActionName) {
}



void USBZPlayerCard::OnConfirmationPopupClosed(FName ActioName) {
}

bool USBZPlayerCard::IsUserValid() const {
    return false;
}

FSBZUser USBZPlayerCard::GetUser() const {
    return FSBZUser{};
}


