#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateMatchmaking.generated.h"

class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateMatchmaking : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchTimeMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimeDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimeShipping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimePrivateParty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimeCamp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
public:
    USBZStateMachineStateMatchmaking();

private:
    UFUNCTION(BlueprintCallable)
    void HandleSessionBecomeOutdated();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerCountChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchInfoUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void FireMatchAcceptUnlock();
    
};

