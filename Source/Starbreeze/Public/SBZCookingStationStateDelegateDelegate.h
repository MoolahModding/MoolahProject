#pragma once
#include "CoreMinimal.h"
#include "ESBZCookingState.h"
#include "SBZCookingStationStateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZCookingStationStateDelegate, ESBZCookingState, OldState, ESBZCookingState, NewState);

