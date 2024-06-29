#pragma once
#include "CoreMinimal.h"
#include "SBZOnSetBackfillAllowedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSetBackfillAllowed, bool, bWasSuccessful);

