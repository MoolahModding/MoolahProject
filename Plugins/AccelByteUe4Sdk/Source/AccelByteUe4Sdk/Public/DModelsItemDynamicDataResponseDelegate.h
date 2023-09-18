#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemDynamicData.h"
#include "DModelsItemDynamicDataResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsItemDynamicDataResponse, FAccelByteModelsItemDynamicData, Response);

