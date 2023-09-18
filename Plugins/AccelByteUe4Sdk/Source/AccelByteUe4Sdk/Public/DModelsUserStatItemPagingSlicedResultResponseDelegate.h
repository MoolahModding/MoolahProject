#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemPagingSlicedResult.h"
#include "DModelsUserStatItemPagingSlicedResultResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserStatItemPagingSlicedResultResponse, FAccelByteModelsUserStatItemPagingSlicedResult, Response);

