#include "SBZContextMenu.h"

USBZContextMenu::USBZContextMenu() {
    this->ParentPlayerCard = NULL;
    this->Button_InviteToParty = NULL;
    this->Button_SendFriendRequest = NULL;
    this->Button_RemoveFriend = NULL;
    this->Button_BlockPlayer = NULL;
    this->Button_UnblockPlayer = NULL;
    this->Button_MutePlayer = NULL;
    this->Button_UnmutePlayer = NULL;
    this->Button_ReportPlayer = NULL;
    this->Button_ShowProfile = NULL;
    this->Button_JoinGame = NULL;
    this->Button_AcceptFriendRequest = NULL;
    this->Button_RejectFriendRequest = NULL;
    this->Button_CancelFriendRequest = NULL;
    this->Button_PromoteToPartyLeader = NULL;
    this->Button_KickFromParty = NULL;
    this->Button_Close = NULL;
    this->Button_KickFromHeist = NULL;
    this->PlayerCardType = ESBZSocialPlayerCardType::AccelByteFriend;
}

void USBZContextMenu::UnblockPlayerAction() {
}

void USBZContextMenu::ShowFriendProfileAction() {
}

void USBZContextMenu::ShowCrewProfileAction() {
}

void USBZContextMenu::SetContextMenuData(USBZPlayerCard* InParentPlayerCard) {
}

void USBZContextMenu::RequestFriendAction() {
}

void USBZContextMenu::ReportPlayerAction(const FSBZReportPlayerInfo& InReportPlayerInfo) {
}

void USBZContextMenu::RemoveFriendAction() {
}

void USBZContextMenu::RejectFriendRequest() {
}

void USBZContextMenu::PromoteToPartyLeader() {
}



void USBZContextMenu::MutePlayerAction(bool MutePlayer) {
}

void USBZContextMenu::KickFromParty() {
}

void USBZContextMenu::KickFromHeist() {
}

void USBZContextMenu::JoinLobbyAction() {
}

void USBZContextMenu::InviteToPartyAction() {
}

void USBZContextMenu::CancelFriendRequest() {
}

void USBZContextMenu::BlockPlayerAction() {
}

void USBZContextMenu::AcceptFriendRequest() {
}


