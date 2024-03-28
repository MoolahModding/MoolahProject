#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchmakingResult.h"
#include "DMatchmakingResultDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDMatchmakingResultDelegate, FAccelByteModelsMatchmakingResult, Response);

