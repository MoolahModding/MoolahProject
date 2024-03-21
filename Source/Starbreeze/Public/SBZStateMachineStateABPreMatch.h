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
    UFUNCTION(BlueprintCallable)
    void HandleReceivedPlayerReadyAck();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyStateUpdated(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleInitializeTravel();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconDisconnect();
    
    UFUNCTION(BlueprintCallable)
    void DelayedTravelToServer();
    
};

