#include "SBZSocialFriendButtonContainer.h"

USBZSocialFriendButtonContainer::USBZSocialFriendButtonContainer() {
    this->Button_FilterFriends = NULL;
    this->LeavePartyButton = NULL;
    this->Panel_AccelByteFriendList = NULL;
    this->Panel_PlatformFriendList = NULL;
    this->Panel_IncomingFriendRequests = NULL;
    this->Panel_OutgoingFriendRequests = NULL;
    this->Panel_UserSearch = NULL;
    this->Panel_BlockedPlayers = NULL;
    this->Panel_PartyMembers = NULL;
    this->Panel_OfflinePlayers = NULL;
    this->FriendButtonWidgetClass = NULL;
    this->FriendButtonWidgetClass = NULL;
    this->PartyMemberButtonWidgetClass = NULL;
    this->PartyMemberButtonWidgetClass = NULL;
    this->CurrentlyFocusedButton = NULL;
    this->StackValue = TEXT("Default__SBZSocialFriendButtonContainer");
}

void USBZSocialFriendButtonContainer::UpdatePartyMembersList() {
}

void USBZSocialFriendButtonContainer::UpdateFriendFilterText(const FString& Text) {
}

void USBZSocialFriendButtonContainer::UpdateFriendButton(const FString& UserID) {
}

void USBZSocialFriendButtonContainer::StopAutoRefreshFriends() {
}

void USBZSocialFriendButtonContainer::StartAutoRefreshFriends() {
}

void USBZSocialFriendButtonContainer::SearchUser(const FString& UserName) {
}

void USBZSocialFriendButtonContainer::RequestPartyLeave() {
}

void USBZSocialFriendButtonContainer::RefreshPartyPanel() {
}

void USBZSocialFriendButtonContainer::RefreshFriends() {
}





FText USBZSocialFriendButtonContainer::GetPlatformName() const {
    return FText::GetEmpty();
}

int32 USBZSocialFriendButtonContainer::GetPartyMembersNum() {
    return 0;
}

TArray<FSBZPartyMember> USBZSocialFriendButtonContainer::GetPartyMembers() const {
    return TArray<FSBZPartyMember>();
}

void USBZSocialFriendButtonContainer::BuildPartyMembersList() {
}

void USBZSocialFriendButtonContainer::AddPartyMember(FSBZPartyMember NewMember) {
}


