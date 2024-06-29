#pragma once
#include "CoreMinimal.h"
#include "SBZWeightTriggerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZWeightTriggerDelegate, bool, bIsOverLimit, bool, bHasChanged, int32, OldCount, int32, NewCount);

