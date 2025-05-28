#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCContentResponse.h"
#include "DModelsUGCBulkContentResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCBulkContentResponse, TArray<FAccelByteModelsUGCContentResponse>, Response);

