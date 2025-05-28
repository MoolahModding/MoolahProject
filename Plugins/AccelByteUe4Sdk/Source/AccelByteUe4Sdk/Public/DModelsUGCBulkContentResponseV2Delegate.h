#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCContentResponseV2.h"
#include "DModelsUGCBulkContentResponseV2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCBulkContentResponseV2, TArray<FAccelByteModelsUGCContentResponseV2>, Response);

