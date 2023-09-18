#pragma once
#include "CoreMinimal.h"
#include "SBZProgressionReachedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZProgressionReachedDelegate, int32, ProgressionIndexReached);

