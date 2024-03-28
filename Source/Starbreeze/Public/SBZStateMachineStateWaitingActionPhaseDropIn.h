#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineStateWaitingActionPhaseBase.h"
#include "SBZStateMachineStateWaitingActionPhaseDropIn.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseDropIn : public USBZStateMachineStateWaitingActionPhaseBase {
    GENERATED_BODY()
public:
    USBZStateMachineStateWaitingActionPhaseDropIn();
protected:
    UFUNCTION()
    void HandlePlayerControllerReady();
    
    UFUNCTION()
    void HandleJoinedHost(UWorld* NewWorld);
    
    UFUNCTION()
    void HandleGameStateReady();
    
};

