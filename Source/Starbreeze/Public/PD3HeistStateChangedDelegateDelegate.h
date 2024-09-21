#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "PD3HeistStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPD3HeistStateChangedDelegate, EPD3HeistState, OldState, EPD3HeistState, NewState);

