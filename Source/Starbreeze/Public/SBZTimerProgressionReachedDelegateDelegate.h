#pragma once
#include "CoreMinimal.h"
#include "SBZTimerProgressionReachedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZTimerProgressionReachedDelegate, int32, ProgressionIndexReached, bool, bDoCosmetics);

