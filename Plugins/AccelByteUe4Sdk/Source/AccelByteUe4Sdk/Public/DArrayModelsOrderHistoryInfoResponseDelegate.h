#pragma once
#include "CoreMinimal.h"
#include "ArrayModelsOrderHistoryInfo.h"
#include "DArrayModelsOrderHistoryInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDArrayModelsOrderHistoryInfoResponse, FArrayModelsOrderHistoryInfo, Response);

