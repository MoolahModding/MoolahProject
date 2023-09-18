#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitingActionPhaseBase.generated.h"

class USBZStateMachineDataWaitActionPhase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseBase : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTimeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataWaitActionPhase* WaitActionPhaseData;
    
public:
    USBZStateMachineStateWaitingActionPhaseBase();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleTransitionGameModeReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void DelayedNetworkBeaconError();
    
};

