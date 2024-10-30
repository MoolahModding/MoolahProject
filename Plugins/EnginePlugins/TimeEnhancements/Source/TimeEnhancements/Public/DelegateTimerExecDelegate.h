#pragma once
#include "CoreMinimal.h"
#include "DelegateTimerExecDelegate.generated.h"

class UDelegateTimer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDelegateTimerExec, const UDelegateTimer*, Timer, float, ElapsedTime, float, TimeSinceLast);

