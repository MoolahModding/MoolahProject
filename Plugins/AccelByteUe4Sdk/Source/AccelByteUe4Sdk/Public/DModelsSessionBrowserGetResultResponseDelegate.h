#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserGetResult.h"
#include "DModelsSessionBrowserGetResultResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSessionBrowserGetResultResponse, FAccelByteModelsSessionBrowserGetResult, Response);

