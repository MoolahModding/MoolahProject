#include "SBZOnlineFunctionLibrary.h"

void USBZOnlineFunctionLibrary::UnmutePlayer(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
}

void USBZOnlineFunctionLibrary::SetMatchmakingRegion(const UObject* WorldContextObject, const FString& MatchmakingRegion) {
}

void USBZOnlineFunctionLibrary::SetLocalClientReady(UObject* WorldContextObject, bool bIsClientReady) {
}

void USBZOnlineFunctionLibrary::RequestVoteRestartLevel(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::RequestSteamLogin(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::RequestRestartLevel(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::RequestLoginWithDeviceID(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::RequestLogin(UObject* WorldContextObject, const FSBZLoginFieldInfo& LoginFieldInfo) {
}

void USBZOnlineFunctionLibrary::RequestDirectJoin(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::RequestCreateAccount(UObject* WorldContextObject, const FSBZRegistrationFieldInfo& RegistrationFieldInfo) {
}

void USBZOnlineFunctionLibrary::MutePlayer(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
}

FSoftObjectPath USBZOnlineFunctionLibrary::LevelIdxToPath(const UObject* WorldContextObject) {
    return FSoftObjectPath{};
}

bool USBZOnlineFunctionLibrary::IsWinGDKActive() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsUserOnline(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsTitleOnline(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsSteamActive() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsSoloGame(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsShippingBuild() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsServerAcceptingSlots(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsSecurityCompaniesProvided() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsSameUniqueId(FUniqueNetIdRepl UniqueNetIdA, FUniqueNetIdRepl UniqueNetIdB) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsRequestInProgress(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsProductOwned(int32 ProductId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPlayerPartyOwner(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPlayerMuted(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPlayerInParty(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPartyOwner(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPartyClient(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsOwnUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsNoSteam() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsNoHud() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsNoChallenges() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLocalPlayerInDropInLobby(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLocalClientReady(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLobbyHost(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLobbyClient(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsInSession(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsInParty(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsForceLocalProgressionSaveFile() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsEOSActive() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsDifficultyArgumentProvided() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsDebugRandomSeedProvided() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsActionPhaseClient(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsAccelByteV2SessionsEnabled() {
    return false;
}

bool USBZOnlineFunctionLibrary::IsAccelByteMatchmakingDisabled() {
    return false;
}

void USBZOnlineFunctionLibrary::HideSessionFromJoin(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::GetUiLobbyInfo(UObject* WorldContextObject, TArray<FSBZLobbyCharacterInfoUi>& OutInfo) {
}

FString USBZOnlineFunctionLibrary::GetSingleNameToShow(const FString& PlatformName, const FString& NebulaName, const ESBZPlatform Platform) {
    return TEXT("");
}

EOnlineSessionInfo USBZOnlineFunctionLibrary::GetSessionInfo(UObject* WorldContextObject) {
    return EOnlineSessionInfo::Initial;
}

TArray<ESBZSecurityCompany> USBZOnlineFunctionLibrary::GetSecurityCompanyListForDifficulty(const UObject* WorldContextObject, const FString& LevelName, ESBZDifficulty Difficulty) {
    return TArray<ESBZSecurityCompany>();
}

TArray<ESBZSecurityCompany> USBZOnlineFunctionLibrary::GetSecurityCompaniesArgument() {
    return TArray<ESBZSecurityCompany>();
}

USBZOnlineSession* USBZOnlineFunctionLibrary::GetSBZOnline(const UObject* WorldContextObject) {
    return NULL;
}

int32 USBZOnlineFunctionLibrary::GetPlayersCount(UObject* WorldContextObject) {
    return 0;
}

FString USBZOnlineFunctionLibrary::GetPlayerDisplayNameByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return TEXT("");
}

UTexture2D* USBZOnlineFunctionLibrary::GetPlayerAvatarByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return NULL;
}

UTexture2D* USBZOnlineFunctionLibrary::GetPlayerAvatar(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ESBZPlatform USBZOnlineFunctionLibrary::GetPlatformFromAccelbytePlatformId(const FString& AccelbytePlatformId) {
    return ESBZPlatform::Unknown;
}

ESBZPlatform USBZOnlineFunctionLibrary::GetPlatform() {
    return ESBZPlatform::Unknown;
}

FSoftObjectPath USBZOnlineFunctionLibrary::GetPathNameFromLevelIdx(const UObject* WorldContextObject, int32 LevelIdx) {
    return FSoftObjectPath{};
}

int32 USBZOnlineFunctionLibrary::GetPartyMembersCount(UObject* WorldContextObject) {
    return 0;
}

UTexture2D* USBZOnlineFunctionLibrary::GetPartyMemberAvatar(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ESBZOnlineJoinType USBZOnlineFunctionLibrary::GetPartyJoinType(UObject* WorldContextObject) {
    return ESBZOnlineJoinType::Debug;
}

bool USBZOnlineFunctionLibrary::GetPartyData(UObject* WorldContextObject, FSBZPartyData& OutPartyData) {
    return false;
}

FString USBZOnlineFunctionLibrary::GetOverrideLevelName() {
    return TEXT("");
}

FString USBZOnlineFunctionLibrary::GetOverrideAccelbyteGameMode() {
    return TEXT("");
}

uint8 USBZOnlineFunctionLibrary::GetMaxPlayersForSession(const UObject* WorldContextObject) {
    return 0;
}

uint8 USBZOnlineFunctionLibrary::GetMaxPlayersArgument(const UObject* WorldContextObject) {
    return 0;
}

FSBZOnlineMatchmakingParams USBZOnlineFunctionLibrary::GetMatchmakingParameters(UObject* WorldContextObject) {
    return FSBZOnlineMatchmakingParams{};
}

FString USBZOnlineFunctionLibrary::GetLastMatchID(const UObject* WorldContextObject) {
    return TEXT("");
}

int32 USBZOnlineFunctionLibrary::GetFoundPlayersCount(UObject* WorldContextObject) {
    return 0;
}

ESBZFirstPartyPlatform USBZOnlineFunctionLibrary::GetFirstPartyPlatform() {
    return ESBZFirstPartyPlatform::Unknown;
}

int32 USBZOnlineFunctionLibrary::GetDifficultyIdxArgument() {
    return 0;
}

int32 USBZOnlineFunctionLibrary::GetDebugRandomSeed() {
    return 0;
}

int32 USBZOnlineFunctionLibrary::GetDebugMatchmakingGroup() {
    return 0;
}

FSBZLoginFieldInfo USBZOnlineFunctionLibrary::GetDebugLoginAndPassword(const UObject* WorldContextObject) {
    return FSBZLoginFieldInfo{};
}

int32 USBZOnlineFunctionLibrary::GetConnectionsCount(UObject* WorldContextObject) {
    return 0;
}

void USBZOnlineFunctionLibrary::GetBeaconMissionInfo(UObject* WorldContextObject, FSBZMissionInfo& OutInfo) {
}

void USBZOnlineFunctionLibrary::GetAllPlayersUniqueNetIds(UObject* WorldContextObject, TArray<FUniqueNetIdRepl>& OutParam) {
}

EAccelBytePlatformType USBZOnlineFunctionLibrary::GetAccelbytePlatformTypeFromFirstPartyPlatformType(ESBZFirstPartyPlatform FirstPartyPlatform) {
    return EAccelBytePlatformType::Steam;
}

EAccelBytePlatformType USBZOnlineFunctionLibrary::GetAccelBytePlatformType() {
    return EAccelBytePlatformType::Steam;
}

FString USBZOnlineFunctionLibrary::GetAccelByteLinkedAccountsUrl() {
    return TEXT("");
}

void USBZOnlineFunctionLibrary::DebugJoinByInvite(UObject* WorldContextObject, const FSBZOnlineSearchResult& InSessionToJoin) {
}

FString USBZOnlineFunctionLibrary::DebugGetSessionParameters(const UObject* WorldContextObject, FName SessionName) {
    return TEXT("");
}

void USBZOnlineFunctionLibrary::ActivateSessionInviteOverlay(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::ActivateProfileOverlay(UObject* WorldContextObject, FUniqueNetIdRepl PlayerId) {
}

void USBZOnlineFunctionLibrary::ActivatePartyInviteOverlay(UObject* WorldContextObject) {
}

USBZOnlineFunctionLibrary::USBZOnlineFunctionLibrary() {
}

