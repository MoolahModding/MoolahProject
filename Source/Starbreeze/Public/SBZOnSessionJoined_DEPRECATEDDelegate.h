#pragma once
#include "CoreMinimal.h"
#include "SBZOnSessionJoined_DEPRECATEDDelegate.generated.h"

class UWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSessionJoined_DEPRECATED, UWorld*, InWorld);

