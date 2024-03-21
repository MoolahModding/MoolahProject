#pragma once
#include "CoreMinimal.h"
#include "SBZOnChargesChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnChargesChangedDelegate, int32, NewCount);

