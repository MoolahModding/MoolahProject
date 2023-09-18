#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemInfo.h"
#include "DModelsItemInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsItemInfoResponse, FAccelByteModelsItemInfo, Response);

