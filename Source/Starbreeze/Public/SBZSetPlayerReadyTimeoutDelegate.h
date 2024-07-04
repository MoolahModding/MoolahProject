#pragma once
#include "CoreMinimal.h"
#include "SBZSetPlayerReadyTimeoutDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSetPlayerReadyTimeout, int32, ReadyTimeoutTime);

