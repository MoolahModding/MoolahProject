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
    UFUNCTION()
    void WaitPlayersTickSeconds();
    
    UFUNCTION()
    void WaitGameTickSeconds();
    
    UFUNCTION()
    void TryUpdateWaitPlayersTimer();
    
    UFUNCTION()
    void StartWaitPlayersTimer();
    
    UFUNCTION()
    void StartWaitGameTimer();
    
protected:
    UFUNCTION()
    void StartWaitForServerPlayerReadyAck();
    
private:
    UFUNCTION()
    void ResetWaitPlayersTimer();
    
protected:
    UFUNCTION()
    void ReceivedHostUpdate();
    
    UFUNCTION()
    void OnMissionEnd();
    
    UFUNCTION()
    void HandleWaitActionPhaseReceived();
    
private:
    UFUNCTION()
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION()
    void HandleLostConnectionToHost(ESBZOnlineCode ErrorCode);
    
};

