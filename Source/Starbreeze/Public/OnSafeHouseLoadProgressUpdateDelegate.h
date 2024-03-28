#pragma once
#include "CoreMinimal.h"
#include "OnSafeHouseLoadProgressUpdateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSafeHouseLoadProgressUpdate, float, Progress);

