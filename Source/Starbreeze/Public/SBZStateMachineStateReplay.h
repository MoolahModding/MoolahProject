#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateReplay.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateReplay : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateReplay();

};

