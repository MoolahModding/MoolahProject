#pragma once
#include "CoreMinimal.h"
#include "EFiniteStateMachineStateEvent.h"
#include "StateEventDelegateDelegate.generated.h"

class UFiniteStateMachineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStateEventDelegate, UFiniteStateMachineComponent*, FSM, FName, State, EFiniteStateMachineStateEvent, StateEvent);

