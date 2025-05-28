#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCSearchContentsPagingResponse.h"
#include "DModelsUGCSearchContentsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCSearchContentsResponse, FAccelByteModelsUGCSearchContentsPagingResponse, Response);

