#pragma once
#include "CoreMinimal.h"
#include "SBZOnCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnCompleteDelegate, bool, bWasSuccess);

