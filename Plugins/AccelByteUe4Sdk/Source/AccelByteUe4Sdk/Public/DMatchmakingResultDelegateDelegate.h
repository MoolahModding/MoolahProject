#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchmakingResult.h"
#include "DMatchmakingResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDMatchmakingResultDelegate, FAccelByteModelsMatchmakingResult, Response);

