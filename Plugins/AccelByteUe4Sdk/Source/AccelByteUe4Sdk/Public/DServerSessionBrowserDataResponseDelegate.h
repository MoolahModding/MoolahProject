#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserData.h"
#include "DServerSessionBrowserDataResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDServerSessionBrowserDataResponse, FAccelByteModelsSessionBrowserData, Response);

