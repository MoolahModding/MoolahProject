#include "ABParty.h"

UABParty::UABParty() {
}

void UABParty::WritePartyStorage(const FWritePartyStorageRequest& Request, FDPartyWriteDataResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::SetOnPartyReject(FDPartyRejectNotif OnNotif) {
}

void UABParty::SetOnPartyMemberLeave(FDPartyMemberLeaveNotif OnNotif) {
}

void UABParty::SetOnPartyMemberDisconnect(FDPartyMemberDisconnectNotif OnNotif) {
}

void UABParty::SetOnPartyMemberConnect(FDPartyMemberConnectNotif OnNotif) {
}

void UABParty::SetOnPartyLeave(FDPartyLeaveNotif OnNotif) {
}

void UABParty::SetOnPartyKick(FDPartyKickNotif OnNotif) {
}

void UABParty::SetOnPartyJoin(FDPartyJoinNotif OnNotif) {
}

void UABParty::SetOnPartyInvite(FDPartyInviteNotif OnNotif) {
}

void UABParty::SetOnPartyGetInvited(FDPartyGetInvitedNotif OnNotif) {
}

void UABParty::SetOnPartyDataUpdateNotifDelegate(FDPartyDataUpdateNotif OnNotif) {
}

void UABParty::SetOnPartyDataUpdate(FDPartyDataUpdateNotif OnNotif) {
}

void UABParty::PartyReject(FPartyRejectRequest Request, FDPartyRejectResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyPromoteLeader(const FPartyPromoteLeaderRequest& Request, FDPartyPromoteLeaderResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyLeave(FDLeavePartyResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyKick(const FPartyKickRequest& Request, FDPartyKickResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyJoinViaCode(const FPartyJoinViaCodeRequest& Request, FDPartyJoinViaCodeResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyJoin(const FPartyJoinRequest& Request, FDPartyJoinResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyInvite(FPartyInviteRequest Request, FDPartyInviteResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyInfo(FDInfoPartyResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyGetCode(FDPartyGetCodeResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyGenerateCode(FDPartyGenerateCodeResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::PartyDeleteCode(FDPartyDeleteCodeResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::GetPartyStorage(const FGetPartyStorageRequest& Request, FDPartyGetStorageResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::GetPartyData(const FGetPartyDataRequest& Request, FDPartyGetDataResponse OnResponse, FDErrorHandler OnError) {
}

void UABParty::CreateParty(FDPartyCreateResponse OnResponse, FDErrorHandler OnError) {
}


