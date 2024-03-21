#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineStateWaitingActionPhaseBase.h"
#include "SBZStateMachineStateWaitingActionPhaseClient.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseClient : public USBZStateMachineStateWaitingActionPhaseBase {
    GENERATED_BODY()
public:
    USBZStateMachineStateWaitingActionPhaseClient();
protected:
    UFUNCTION(BlueprintCallable)
    void ReceivedHostUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerControllerReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleJoinedHost(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateReady();
    
};

