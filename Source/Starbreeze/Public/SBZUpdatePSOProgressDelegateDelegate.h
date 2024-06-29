#pragma once
#include "CoreMinimal.h"
#include "SBZUpdatePSOProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZUpdatePSOProgressDelegate, int32, CurrentProgress, int32, TotalRemaining);

