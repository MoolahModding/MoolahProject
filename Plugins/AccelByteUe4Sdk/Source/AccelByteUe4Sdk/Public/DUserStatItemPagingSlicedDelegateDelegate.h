#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemPagingSlicedResult.h"
#include "DUserStatItemPagingSlicedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUserStatItemPagingSlicedDelegate, FAccelByteModelsUserStatItemPagingSlicedResult, Response);

