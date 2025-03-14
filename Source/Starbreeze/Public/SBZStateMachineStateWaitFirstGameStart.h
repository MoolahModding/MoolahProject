#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitFirstGameStart.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitFirstGameStart : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateWaitFirstGameStart();

};

