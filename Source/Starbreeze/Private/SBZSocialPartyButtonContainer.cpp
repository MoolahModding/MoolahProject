#include "SBZSocialPartyButtonContainer.h"

USBZSocialPartyButtonContainer::USBZSocialPartyButtonContainer() {
    this->StackValue = TEXT("Default__SBZSocialPartyButtonContainer");
    this->Panel_PartyMembers = NULL;
    this->PartyMemberButtonWidgetClass = NULL;
}

void USBZSocialPartyButtonContainer::RequestPartyLeave() {
}

void USBZSocialPartyButtonContainer::RefreshPanel() {
}



int32 USBZSocialPartyButtonContainer::GetPartyMembersNum() {
    return 0;
}

TArray<FSBZPartyMember> USBZSocialPartyButtonContainer::GetPartyMembers() const {
    return TArray<FSBZPartyMember>();
}

void USBZSocialPartyButtonContainer::BuildPartyMembersList() {
}

void USBZSocialPartyButtonContainer::AddPartyMember(FSBZPartyMember NewMember) {
}


