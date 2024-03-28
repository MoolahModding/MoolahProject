#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemPagingSlicedResult.h"
#include "DModelsItemPagingSlicedResultResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsItemPagingSlicedResultResponse, FAccelByteModelsItemPagingSlicedResult, Response);

