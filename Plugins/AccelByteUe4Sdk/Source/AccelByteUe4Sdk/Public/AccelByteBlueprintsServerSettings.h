#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESettingsEnvironment.h"
#include "AccelByteBlueprintsServerSettings.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsServerSettings : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccelByteBlueprintsServerSettings();
    UFUNCTION(BlueprintCallable)
    static void SetUGCServerUrl(const FString& UGCServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetStatisticServerUrl(const FString& StatisticServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetSessionServerUrl(const FString& SessionServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetSessionBrowserServerUrl(const FString& SessionBrowserServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetSendPredefinedEvent(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetSeasonPassServerUrl(const FString& SessionPassServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetQosPingTimeout(const float& QosPingTimeout);
    
    UFUNCTION(BlueprintCallable)
    static void SetQosManagerServerUrl(const FString& PlatformServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetPublisherNamespace(const FString& PublisherNamespace);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlatformServerUrl(const FString& PlatformServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetNamespace(const FString& Namespace);
    
    UFUNCTION(BlueprintCallable)
    static void SetMatchmakingV2ServerUrl(const FString& MatchmakingV2ServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetMatchmakingServerUrl(const FString& MatchmakingServerurl);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyServerUrl(const FString& LobbyServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetIamServerUrl(const FString& IamServerUrl);
    
    UFUNCTION(BlueprintCallable)
    void SetGDPRServerUrl(const FString& GDPRServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameTelemetryServerUrl(const FString& GameTelemetryServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetDSMControllerServerUrl(const FString& DSMControllerServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetDSHubServerUrl(const FString& DSHubServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloudSaveServerUrl(const FString& CloudServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetClientSecret(const FString& ClientSecret);
    
    UFUNCTION(BlueprintCallable)
    static void SetClientId(const FString& ClientId);
    
    UFUNCTION(BlueprintCallable)
    static void SetChatServerUrl(const FString& ChatServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetAMSServerWatchdogUrl(const FString& AMSServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievementServerUrl(const FString& AchievementServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSettings(const ESettingsEnvironment Environment);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSendPredefinedEvent();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUGCServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetStatisticServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSessionServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSessionBrowserServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSeasonPassServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static float GetQosPingTimeout();
    
    UFUNCTION(BlueprintCallable)
    static FString GetQosManagerServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPublisherNamespace();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetNamespace();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMatchmakingV2ServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMatchmakingServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLobbyServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetIamServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGDPRServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameTelemetryServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDSMControllerServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDSHubServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCloudSaveServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClientSecret();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClientId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetChatServerUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAMSServerWatchdogUrl();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAchievementServerUrl();
    
};

