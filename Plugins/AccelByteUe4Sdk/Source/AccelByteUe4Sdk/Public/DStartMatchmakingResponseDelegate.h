#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchmakingResponse.h"
#include "DStartMatchmakingResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDStartMatchmakingResponse, FAccelByteModelsMatchmakingResponse, Response);

