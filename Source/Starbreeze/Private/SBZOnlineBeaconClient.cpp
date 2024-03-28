#include "SBZOnlineBeaconClient.h"

void ASBZOnlineBeaconClient::VoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
}
bool ASBZOnlineBeaconClient::VoteToKick_Validate(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
    return true;
}

void ASBZOnlineBeaconClient::SendChatMessage_Implementation(const FSBZChatMessage& Message) {
}
bool ASBZOnlineBeaconClient::SendChatMessage_Validate(const FSBZChatMessage& Message) {
    return true;
}

void ASBZOnlineBeaconClient::ReceiveChatMessage_Implementation(const FSBZChatMessage& Message) {
}
bool ASBZOnlineBeaconClient::ReceiveChatMessage_Validate(const FSBZChatMessage& Message) {
    return true;
}

void ASBZOnlineBeaconClient::KickingInProgress_Implementation(FSBZKickingInfo NewKickingInfo) {
}
bool ASBZOnlineBeaconClient::KickingInProgress_Validate(FSBZKickingInfo NewKickingInfo) {
    return true;
}

void ASBZOnlineBeaconClient::KickFailed_Implementation(ESBZKickingError KickingError) {
}
bool ASBZOnlineBeaconClient::KickFailed_Validate(ESBZKickingError KickingError) {
    return true;
}

void ASBZOnlineBeaconClient::InitiateKickRequest_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
}
bool ASBZOnlineBeaconClient::InitiateKickRequest_Validate(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
    return true;
}

void ASBZOnlineBeaconClient::HandleKicked_Implementation() {
}
bool ASBZOnlineBeaconClient::HandleKicked_Validate() {
    return true;
}

ASBZOnlineBeaconClient::ASBZOnlineBeaconClient() {
}

