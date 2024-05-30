#pragma once
#include "CoreMinimal.h"
#include "SBZBooleanStateDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZBooleanStateDynamicDelegate, bool, State);

