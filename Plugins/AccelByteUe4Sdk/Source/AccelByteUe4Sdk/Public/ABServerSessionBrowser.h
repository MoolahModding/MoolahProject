#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsSessionBrowserCreateRequest.h"
#include "AccelByteModelsSessionBrowserUpdateRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DServerSessionBrowserAddPlayerResponseDelegate.h"
#include "DServerSessionBrowserDataResponseDelegate.h"
#include "DServerSessionBrowserGetResultResponseDelegate.h"
#include "DServerSessionBrowserRecentPlayerGetResultResponseDelegate.h"
#include "EAccelByteSessionType.h"
#include "ABServerSessionBrowser.generated.h"

UCLASS(Blueprintable)
class UABServerSessionBrowser : public UObject {
    GENERATED_BODY()
public:
    UABServerSessionBrowser();

    UFUNCTION(BlueprintCallable)
    void UpdateGameSessionByStruct(const FString& SessionId, const FAccelByteModelsSessionBrowserUpdateRequest& UpdateSessionRequest, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameSession(const FString& SessionId, int32 MaxPlayer, int32 CurrentPlayerCount, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterPlayer(const FString& SessionId, const FString& PlayerToRemove, const FDServerSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameSession(const FString& SessionId, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayer(const FString& SessionId, const FString& PlayerToAdd, bool AsSpectator, const FDServerSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(const FString& SessionId, const FString& Password, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRecentPlayer(const FString& UserId, const FDServerSessionBrowserRecentPlayerGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeStringAndMatchExist(const FString& SessionTypeString, const FString& GameMode, const FString& MatchExist, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeString(const FString& SessionTypeString, const FString& GameMode, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType SessionType, const FString& GameMode, const FString& MatchExist, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FDServerSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionTypeSpecifiedByString(const FString& SessionTypeString, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionTypeSpecificByStruct(FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionPublic(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionPrivate(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDServerSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

