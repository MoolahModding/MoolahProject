#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchmakingResponse.h"
#include "DCancelMatchmakingResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDCancelMatchmakingResponse, FAccelByteModelsMatchmakingResponse, Response);

