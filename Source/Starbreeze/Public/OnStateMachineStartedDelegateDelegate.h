#pragma once
#include "CoreMinimal.h"
#include "OnStateMachineStartedDelegateDelegate.generated.h"

class USBZGameStateMachine;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineStartedDelegate, USBZGameStateMachine*, StateMachine);

