#pragma once
#include "CoreMinimal.h"
#include "SBZOnLocationSelectedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnLocationSelectedEvent, int32, LocationIndex);

