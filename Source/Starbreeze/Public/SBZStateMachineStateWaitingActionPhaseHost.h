#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZStateMachineStateWaitingActionPhaseBase.h"
#include "SBZStateMachineStateWaitingActionPhaseHost.generated.h"

class APlayerState;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseHost : public USBZStateMachineStateWaitingActionPhaseBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutAck;
    
public:
    USBZStateMachineStateWaitingActionPhaseHost();
protected:
    UFUNCTION()
    void PostLoadTransitionMap(UWorld* NewWorld);
    
    UFUNCTION()
    void HandlePlayerRegister(APlayerState* ChangedPlayerState);
    
    UFUNCTION()
    void HandlePlayerControllerReady();
    
    UFUNCTION()
    void HandlePlayerAckReceived(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION()
    void DestinationMapLoaded(UWorld* NewWorld);
    
};

