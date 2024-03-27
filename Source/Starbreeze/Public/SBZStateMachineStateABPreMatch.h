#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateABPreMatch.generated.h"

class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateABPreMatch : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
public:
    USBZStateMachineStateABPreMatch();
protected:
    UFUNCTION()
    void OnPlayerReadyStatusUpdated(bool bIsReady);
    
    UFUNCTION()
    void HandleReceivedPlayerReadyAck();
    
    UFUNCTION()
    void HandleLobbyStateUpdated(ESBZOnlineCode Result);
    
    UFUNCTION()
    void HandleInitializeTravel();
    
    UFUNCTION()
    void HandleBeaconDisconnect();
    
    UFUNCTION()
    void DelayedTravelToServer();
    
};

