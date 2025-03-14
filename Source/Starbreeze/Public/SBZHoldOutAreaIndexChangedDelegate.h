#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutAreaIndexChangedDelegate.generated.h"

class ASBZHoldOutAIDrone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZHoldOutAreaIndexChanged, ASBZHoldOutAIDrone*, Drone, int32, NewAreaIndex);

