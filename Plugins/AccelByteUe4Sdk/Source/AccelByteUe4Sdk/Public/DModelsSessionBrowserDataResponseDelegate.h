#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserData.h"
#include "DModelsSessionBrowserDataResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSessionBrowserDataResponse, FAccelByteModelsSessionBrowserData, Response);

