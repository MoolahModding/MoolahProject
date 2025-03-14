#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutTotalPayoutChangedDelegate.generated.h"

class ASBZHoldOutAIDrone;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZHoldOutTotalPayoutChanged, ASBZHoldOutAIDrone*, Drone, int64, TotalPayout);

