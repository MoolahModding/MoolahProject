#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZStateMachineStateWaitingActionPhaseBase.h"
#include "SBZStateMachineStateWaitingActionPhaseHost.generated.h"

class APlayerState;
class UWorld;

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseHost : public USBZStateMachineStateWaitingActionPhaseBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutAck;
    
public:
    USBZStateMachineStateWaitingActionPhaseHost();

protected:
    UFUNCTION(BlueprintCallable)
    void PostLoadTransitionMap(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerRegister(APlayerState* ChangedPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerControllerReady();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerAckReceived(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void DestinationMapLoaded(UWorld* NewWorld);
    
};

