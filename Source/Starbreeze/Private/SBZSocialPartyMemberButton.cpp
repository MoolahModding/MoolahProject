#include "SBZSocialPartyMemberButton.h"

USBZSocialPartyMemberButton::USBZSocialPartyMemberButton() {
    this->bIsPartyLeader = false;
    this->Type = ESBZPartyMemberButtonType::PartyMember;
    this->PlatformIcon = NULL;
    this->NebulaIcon = NULL;
}

void USBZSocialPartyMemberButton::RevokeInvite() {
}

void USBZSocialPartyMemberButton::RejectInvite() {
}

void USBZSocialPartyMemberButton::PromotePlayer() {
}


void USBZSocialPartyMemberButton::KickPlayer() {
}

void USBZSocialPartyMemberButton::FriendProfileAction() {
}

void USBZSocialPartyMemberButton::ExecuteAction(FName Action) {
}

bool USBZSocialPartyMemberButton::CanShowFriendProfile() {
    return false;
}

void USBZSocialPartyMemberButton::AcceptInvite() {
}


