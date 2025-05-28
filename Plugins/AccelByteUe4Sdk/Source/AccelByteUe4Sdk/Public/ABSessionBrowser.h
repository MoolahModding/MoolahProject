#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsSessionBrowserCreateRequest.h"
#include "AccelByteModelsSessionBrowserUpdateRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsSessionBrowserAddPlayerResponseDelegate.h"
#include "DModelsSessionBrowserDataResponseDelegate.h"
#include "DModelsSessionBrowserGetResultByUserIdsResponseDelegate.h"
#include "DModelsSessionBrowserGetResultResponseDelegate.h"
#include "DModelsSessionBrowserRecentPlayerGetResultResponseDelegate.h"
#include "EAccelByteSessionType.h"
#include "ABSessionBrowser.generated.h"

UCLASS(Blueprintable)
class UABSessionBrowser : public UObject {
    GENERATED_BODY()
public:
    UABSessionBrowser();

    UFUNCTION(BlueprintCallable)
    void UpdateGameSettingsByJsonObject(const FString& SessionId, FJsonObjectWrapper Settings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameSettings(const FString& SessionId, TMap<FString, FString> Settings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameSessionByStruct(const FString& SessionId, const FAccelByteModelsSessionBrowserUpdateRequest& UpdateSessionRequest, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameSession(const FString& SessionId, int32 MaxPlayer, int32 CurrentPlayerCount, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterPlayer(const FString& SessionId, const FString& PlayerToRemove, const FDModelsSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameSession(const FString& SessionId, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayer(const FString& SessionId, const FString& PlayerToAdd, bool AsSpectator, const FDModelsSessionBrowserAddPlayerResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(const FString& SessionId, const FString& Password, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRecentPlayer(const FString& UserId, const FDModelsSessionBrowserRecentPlayerGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByUserIds(TArray<FString> UserIds, const FDModelsSessionBrowserGetResultByUserIdsResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeStringAndMatchExist(const FString& SessionTypeString, const FString& GameMode, const FString& MatchExist, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeString(const FString& SessionTypeString, const FString& GameMode, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType SessionType, const FString& GameMode, const FString& MatchExist, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSessionsByTypeEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FDModelsSessionBrowserGetResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSession(const FString& SessionId, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionTypeSpecifiedByString(const FString& SessionTypeString, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType SessionType, const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionTypeSpecificByStruct(FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionPublic(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameSessionPrivate(const FString& GameMode, const FString& GameMapName, const FString& GameVersion, int32 BotCount, int32 MaxPlayer, int32 MaxSpectator, const FString& Password, FJsonObjectWrapper OtherSettings, const FDModelsSessionBrowserDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

