#pragma once
#include "CoreMinimal.h"
#include "SBZTimerComponentDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZTimerComponentDelegate, float, NewValue, bool, bDoCosmetics);

