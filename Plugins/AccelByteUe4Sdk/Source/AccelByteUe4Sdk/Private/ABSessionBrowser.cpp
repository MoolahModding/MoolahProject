#include "ABSessionBrowser.h"

UABSessionBrowser::UABSessionBrowser() {
}

void UABSessionBrowser::UpdateGameSettingsByJsonObject(const FString& SessionId, FJsonObjectWrapper Settings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::UpdateGameSettings(const FString& SessionId, TMap<FString, FString> Settings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::UpdateGameSessionByStruct(const FString& SessionId, const FAccelByteModelsSessionBrowserUpdateRequest& UpdateSessionRequest, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::UpdateGameSession(const FString& SessionId, int32 MaxPlayer, int32 CurrentPlayerCount, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::UnregisterPlayer(const FString& SessionId, const FString& PlayerToRemove, const FDModelsSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::RemoveGameSession(const FString& SessionId, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::RegisterPlayer(const FString& SessionId, const FString& PlayerToAdd, bool AsSpectator, const FDModelsSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::JoinSession(const FString& SessionId, const FString& Password, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::GetRecentPlayer(const FString& UserId, const FDModelsSessionBrowserRecentPlayerGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABSessionBrowser::GetGameSessionsByUserIds(TArray<FString> UserIds, const FDModelsSessionBrowserGetResultByUserIdsResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::GetGameSessionsByTypeStringAndMatchExist(const FString& SessionTypeString, const FString& GameMode, const FString& MatchExist, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABSessionBrowser::GetGameSessionsByTypeString(const FString& SessionTypeString, const FString& GameMode, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABSessionBrowser::GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType SessionType, const FString& GameMode, const FString& MatchExist, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABSessionBrowser::GetGameSessionsByTypeEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit) {
}

void UABSessionBrowser::GetGameSession(const FString& SessionId, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::CreateGameSessionTypeSpecifiedByString(const FString& SessionTypeString, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::CreateGameSessionTypeSpecificByStruct(FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::CreateGameSessionPublic(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABSessionBrowser::CreateGameSessionPrivate(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}


