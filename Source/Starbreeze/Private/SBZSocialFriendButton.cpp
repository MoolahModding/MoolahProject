#include "SBZSocialFriendButton.h"

USBZSocialFriendButton::USBZSocialFriendButton() {
    this->FriendButtonType = ESocialFriendButtonType::AccelByteFriend;
    this->SocialFriendButtonContainer = NULL;
    this->CurrentFeedbackType = ESBZRequestFeedbackType::AcceptFriendRequest;
}

void USBZSocialFriendButton::UnblockPlayerAction() {
}

void USBZSocialFriendButton::TertiaryAction() {
}

void USBZSocialFriendButton::SecondaryAction() {
}

void USBZSocialFriendButton::RequestFriend() {
}


void USBZSocialFriendButton::ReportPlayer(const FSBZReportPlayerInfo& ReportPlayerInfo) {
}

void USBZSocialFriendButton::RemoveFriend() {
}

void USBZSocialFriendButton::RejectFriendRequest() {
}

void USBZSocialFriendButton::QuaternaryAction() {
}

void USBZSocialFriendButton::OnRequestStatusPopupClosed(FName ActionName) {
}


void USBZSocialFriendButton::OnConfirmationPopupClosed(FName ActionName) {
}

void USBZSocialFriendButton::JoinParty() {
}

void USBZSocialFriendButton::JoinLobby() {
}

bool USBZSocialFriendButton::IsUserValid() const {
    return false;
}

FSBZUser USBZSocialFriendButton::GetUser() const {
    return FSBZUser{};
}

void USBZSocialFriendButton::FriendProfileAction() {
}

void USBZSocialFriendButton::ExecuteAction(FName Action) {
}

bool USBZSocialFriendButton::CanShowFriendProfile() {
    return false;
}

bool USBZSocialFriendButton::CanRequestFriend() {
    return false;
}

bool USBZSocialFriendButton::CanJoinParty() {
    return false;
}

bool USBZSocialFriendButton::CanJoinLobby() {
    return false;
}

bool USBZSocialFriendButton::CanInvitePlayer() {
    return false;
}

void USBZSocialFriendButton::CancelFriendRequest() {
}

bool USBZSocialFriendButton::CanBlockPlayer() {
    return false;
}

void USBZSocialFriendButton::BlockPlayerAction() {
}

void USBZSocialFriendButton::AcceptFriendRequest() {
}


