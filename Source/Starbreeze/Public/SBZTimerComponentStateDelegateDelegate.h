#pragma once
#include "CoreMinimal.h"
#include "ESBZTimerState.h"
#include "SBZTimerComponentStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZTimerComponentStateDelegate, ESBZTimerState, OldState, ESBZTimerState, NewState, bool, bDoCosmetics);

