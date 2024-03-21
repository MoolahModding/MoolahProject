#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateLobby.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateLobby : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersWaitTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionPhasePlayersWaitTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameStartTimeout;
    
public:
    USBZStateMachineStateLobby();
private:
    UFUNCTION(BlueprintCallable)
    void WaitPlayersTickSeconds();
    
    UFUNCTION(BlueprintCallable)
    void WaitGameTickSeconds();
    
    UFUNCTION(BlueprintCallable)
    void TryUpdateWaitPlayersTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartWaitPlayersTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartWaitGameTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartWaitForServerPlayerReadyAck();
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetWaitPlayersTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReceivedHostUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleWaitActionPhaseReceived();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToHost(ESBZOnlineCode ErrorCode);
    
};

