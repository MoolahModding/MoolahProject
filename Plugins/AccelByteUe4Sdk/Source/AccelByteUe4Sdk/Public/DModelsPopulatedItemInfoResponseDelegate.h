#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPopulatedItemInfo.h"
#include "DModelsPopulatedItemInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPopulatedItemInfoResponse, FAccelByteModelsPopulatedItemInfo, Response);

