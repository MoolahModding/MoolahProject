#include "ABServerSessionBrowser.h"

void UABServerSessionBrowser::UpdateGameSessionByStruct(const FString& SessionId, const FAccelByteModelsSessionBrowserUpdateRequest& UpdateSessionRequest, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::UpdateGameSession(const FString& SessionId, int32 MaxPlayer, int32 CurrentPlayerCount, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::UnregisterPlayer(const FString& SessionId, const FString& PlayerToRemove, const FDServerSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::RemoveGameSession(const FString& SessionId, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::RegisterPlayer(const FString& SessionId, const FString& PlayerToAdd, bool AsSpectator, const FDServerSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::JoinSession(const FString& SessionId, const FString& Password, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::GetRecentPlayer(const FString& UserId, const FDServerSessionBrowserRecentPlayerGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABServerSessionBrowser::GetGameSessionsByTypeStringAndMatchExist(const FString& SessionTypeString, const FString& GameMode, const FString& MatchExist, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABServerSessionBrowser::GetGameSessionsByTypeString(const FString& SessionTypeString, const FString& GameMode, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABServerSessionBrowser::GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType SessionType, const FString& GameMode, const FString& MatchExist, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABServerSessionBrowser::GetGameSessionsByTypeEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABServerSessionBrowser::CreateGameSessionTypeSpecifiedByString(const FString& SessionTypeString, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::CreateGameSessionTypeSpecificByStruct(FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::CreateGameSessionPublic(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerSessionBrowser::CreateGameSessionPrivate(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

UABServerSessionBrowser::UABServerSessionBrowser() {
}

