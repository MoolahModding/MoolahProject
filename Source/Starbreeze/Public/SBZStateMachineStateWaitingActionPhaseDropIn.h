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
    UFUNCTION(BlueprintCallable)
    void HandlePlayerControllerReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleJoinedHost(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateReady();
    
};

