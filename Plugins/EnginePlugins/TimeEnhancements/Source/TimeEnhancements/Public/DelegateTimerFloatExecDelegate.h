#pragma once
#include "CoreMinimal.h"
#include "DelegateTimerFloatExecDelegate.generated.h"

class UCurveFloatDelegateTimer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FDelegateTimerFloatExec, const UCurveFloatDelegateTimer*, CurveFloatTimer, float, CurveElapsedTime, float, CurveTimeSinceLast, float, CurveValue, float, CurveTime);

