#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ServerApiClient.generated.h"

class UABServerAchievement;
class UABServerCredentials;
class UABServerDSM;
class UABServerLobby;
class UABServerMatchmaking;
class UABServerOauth2;
class UABServerSessionBrowser;
class UABServerStatistic;

UCLASS(Blueprintable)
class UServerApiClient : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerCredentials* Credentials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerOauth2* ServerOauth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerDSM* ServerDSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerLobby* ServerLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerMatchmaking* ServerMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerSessionBrowser* ServerSessionBrowser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerAchievement* ServerAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UABServerStatistic* ServerStatistic;
    
    UServerApiClient();

};

