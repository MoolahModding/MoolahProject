#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateSubsystemInitialisation.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateSubsystemInitialisation : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateSubsystemInitialisation();
private:
    UFUNCTION()
    void HandlePlatformUserLoginComplete(bool bSuccess);
    
};

