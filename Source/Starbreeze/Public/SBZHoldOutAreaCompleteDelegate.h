#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutAreaCompleteDelegate.generated.h"

class ASBZHoldOutArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZHoldOutAreaComplete, bool, bIsSuccessful, ASBZHoldOutArea*, HoldOutArea);

