#include "SBZOnlineSession.h"

USBZOnlineSession::USBZOnlineSession() {
    this->Party = NULL;
    this->PartyManager = NULL;
    this->OnlineSessionSettingManager = NULL;
    this->Lobby = NULL;
    this->Chat = NULL;
    this->Invites = NULL;
    this->KickingManager = NULL;
    this->VotingManager = NULL;
    this->Matchmaking = NULL;
    this->OnlineSessionUtils = NULL;
    this->OnlineSessionRequestHandler = NULL;
    this->OnlineSessionSearch = NULL;
    this->P2P = NULL;
    this->GlobalLobby = NULL;
    this->FriendManager = NULL;
    this->JobOverviewSync = NULL;
    this->OnlineSlotsClient = NULL;
    this->OnlineSlotsHost = NULL;
    this->Voip = NULL;
    this->bHostPartyByDefault = false;
    this->GameRecordsManager = NULL;
    this->BlockedPlayerManager = NULL;
    this->AvatarCache = NULL;
}

void USBZOnlineSession::SetLocalClientReady(bool bIsClientReady) {
}

void USBZOnlineSession::OnNetworkStatus(ESBZServiceStatus ServiceStatus) {
}

bool USBZOnlineSession::IsLocalClientReady() const {
    return false;
}

void USBZOnlineSession::HandleOnlinePlatformError(ESBZOnlineSessionRequestType RequestType) {
}

TArray<FSBZLobbyCharacterInfoUi> USBZOnlineSession::GetUiLobbyInfo() const {
    return TArray<FSBZLobbyCharacterInfoUi>();
}

int32 USBZOnlineSession::GetPlayersCount() {
    return 0;
}

int32 USBZOnlineSession::GetPartyMembersCount() {
    return 0;
}

void USBZOnlineSession::GetMenuEvent(const FString& EventName) {
}

FString USBZOnlineSession::GetMatchmakingRegion() const {
    return TEXT("");
}

USBZLobbyLocalState* USBZOnlineSession::GetLobbyState() {
    return NULL;
}

int32 USBZOnlineSession::GetFoundPlayersCount() {
    return 0;
}

FSBZMissionInfo USBZOnlineSession::GetBeaconMissionInfo() {
    return FSBZMissionInfo{};
}


