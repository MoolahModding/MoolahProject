#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutFogTargetValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZHoldOutFogTargetValueChanged, bool, bIncreased, float, NewFogTargetValue);

