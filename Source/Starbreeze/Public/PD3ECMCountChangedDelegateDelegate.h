#pragma once
#include "CoreMinimal.h"
#include "PD3ECMCountChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPD3ECMCountChangedDelegate, int32, NewCount, int32, OldCount, float, AddedTime, bool, bInIsSignalScanActive);

