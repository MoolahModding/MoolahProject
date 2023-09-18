#include "SBZParty.h"

USBZParty::USBZParty() {
    this->PartyClient = NULL;
    this->PartyHost = NULL;
    this->DefaultPort = 15039;
    this->PartyRestoreTimeout = 45.00f;
}

void USBZParty::UpdatePartyState(const FSBZPartyData& InPartyState) {
}

void USBZParty::JoinPartyComplete(const ESBZOnlineCode& Result) {
}

void USBZParty::HostPartySession(const FSBZOnlineSessionParams& Params) {
}

void USBZParty::HostPartyComplete(const ESBZOnlineCode& Result) {
}

void USBZParty::HandleLostConnectionToPartyHost() {
}

void USBZParty::HandleGameStateLeft(FName StateName) {
}

void USBZParty::HandleGameStateEnter(FName StateName) {
}

FSBZPartyData USBZParty::GetPartyData() const {
    return FSBZPartyData{};
}

void USBZParty::CancelPartyRestore() {
}


