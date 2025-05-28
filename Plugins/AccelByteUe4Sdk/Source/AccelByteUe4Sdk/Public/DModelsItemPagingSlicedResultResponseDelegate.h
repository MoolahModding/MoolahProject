#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemPagingSlicedResult.h"
#include "DModelsItemPagingSlicedResultResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsItemPagingSlicedResultResponse, FAccelByteModelsItemPagingSlicedResult, Response);

