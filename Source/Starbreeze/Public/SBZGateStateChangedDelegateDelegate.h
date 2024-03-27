#pragma once
#include "CoreMinimal.h"
#include "ESBZGateState.h"
#include "SBZGateStateChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZGateStateChangedDelegate, ESBZGateState, OldState, ESBZGateState, State);

