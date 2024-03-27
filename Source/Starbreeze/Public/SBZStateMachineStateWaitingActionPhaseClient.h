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
    UFUNCTION()
    void ReceivedHostUpdate();
    
    UFUNCTION()
    void HandlePlayerControllerReady();
    
    UFUNCTION()
    void HandleJoinedHost(UWorld* NewWorld);
    
    UFUNCTION()
    void HandleGameStateReady();
    
};

