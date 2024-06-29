#pragma once
#include "CoreMinimal.h"
#include "SBZFilterAllDesiredCountsDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZFilterAllDesiredCountsDynamicDelegate, bool, bState);

