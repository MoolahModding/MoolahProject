#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHttpCacheType.h"
#include "ESettingsEnvironment.h"
#include "AccelByteBlueprintsSettings.generated.h"

UCLASS(Blueprintable)
class ACCELBYTEUE4SDK_API UAccelByteBlueprintsSettings : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccelByteBlueprintsSettings();
    UFUNCTION(BlueprintCallable)
    static void SetUGCServerUrl(const FString& UGCServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetTurnManagerServerUrl(const FString& TurnManagerServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetStatisticServerUrl(const FString& StatisticServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetSessionServerUrl(const FString& SessionServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetSessionBrowserServerUrl(const FString& SessionBrowserServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetServerUseAMS(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetServerQosLatencyPollIntervalSecs(const float& QosServerLatencyPollIntervalSecs);
    
    UFUNCTION(BlueprintCallable)
    static void SetSeasonPassServerUrl(const FString& SeasonPassServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetReportingServerUrl(const FString& ReportingServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetQosPingTimeout(const float& QosPingTimeout);
    
    UFUNCTION(BlueprintCallable)
    static void SetQosManagerServerUrl(const FString& QosManagerServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetQosLatencyPollIntervalSecs(const float& QosLatencyPollIntervalSecs);
    
    UFUNCTION(BlueprintCallable)
    static void SetPublisherNamespace(const FString& PublisherNamespace);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlatformServerUrl(const FString& PlatformServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetNamespace(const FString& Namespace);
    
    UFUNCTION(BlueprintCallable)
    static void SetMatchmakingV2ServerUrl(const FString& MatchmakingV2ServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyServerUrl(const FString& LobbyServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetLeaderboardServerUrl(const FString& LeaderboardServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetIamServerUrl(const FString& IamServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetHttpCacheType(EHttpCacheType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetGroupServerUrl(const FString& GroupServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetGDPRServerUrl(const FString& GDPRServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameTelemetryServerUrl(const FString& GameTelemetryServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameProfileServerUrl(const FString& GameProfileServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloudStorageServerUrl(const FString& CloudStorageServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloudSaveServerUrl(const FString& CloudSaveServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetClientSecret(const FString& ClientSecret);
    
    UFUNCTION(BlueprintCallable)
    static void SetClientId(const FString& ClientId);
    
    UFUNCTION(BlueprintCallable)
    static void SetChatServerUrl(const FString& ChatServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetBasicServerUrl(const FString& BasicServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppId(const FString& AppId);
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievementServerUrl(const FString& CloudSaveServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSettings(const ESettingsEnvironment Environment);
    
    UFUNCTION(BlueprintCallable)
    static bool IsServerUseAMS();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSendPredefinedEvent();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHttpCacheEnabled();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUGCServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetTurnManagerServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetStatisticServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSessionServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSessionBrowserServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetReportingServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static float GetQosServerLatencyPollIntervalSecs();
    
    UFUNCTION(BlueprintCallable)
    static float GetQosPingTimeout();
    
    UFUNCTION(BlueprintCallable)
    static FString GetQosManagerServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static float GetQosLatencyPollIntervalSecs();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPublisherNamespace();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetNamespace();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMatchmakingV2ServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLobbyServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLeaderboardServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetIamServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static EHttpCacheType GetHttpCacheType();
    
    UFUNCTION(BlueprintCallable)
    static FString GetHeartBeatData();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGroupServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGDPRServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameTelemetryServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameProfileServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCustomerName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCloudStorageServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCloudSaveServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClientSecret();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClientId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetChatServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBasicServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAppId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAchievementServerUrl();
    
};

