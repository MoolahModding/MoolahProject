#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAccelByteServerLifeCycle.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZAccelByteServerLifeCycle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutdownTimeDsLoading;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutdownTimeDsWaitingForPlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutdownTimeDsWaitingForPlayersShort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutdownTimeDsActionPhase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutdownTimeDsResult;
    
public:
    USBZAccelByteServerLifeCycle();

private:
    UFUNCTION(BlueprintCallable)
    void OnNetDriverTearDown();
    
};

