#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.h"
#include "SBZCommonStateMachineState.h"
#include "SBZClientStateMachineState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZClientStateMachineState : public USBZCommonStateMachineState {
    GENERATED_BODY()
public:
    USBZClientStateMachineState();

private:
    UFUNCTION(BlueprintCallable)
    void OnNetworkStatusChanged(ESBZServiceStatus ServiceStatus);
    
};

