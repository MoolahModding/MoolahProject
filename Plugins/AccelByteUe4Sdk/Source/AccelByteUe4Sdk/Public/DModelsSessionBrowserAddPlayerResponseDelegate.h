#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserAddPlayerResponse.h"
#include "DModelsSessionBrowserAddPlayerResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSessionBrowserAddPlayerResponse, FAccelByteModelsSessionBrowserAddPlayerResponse, Response);

