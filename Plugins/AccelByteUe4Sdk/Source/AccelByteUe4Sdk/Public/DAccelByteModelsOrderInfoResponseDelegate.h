#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsOrderInfo.h"
#include "DAccelByteModelsOrderInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsOrderInfoResponse, FAccelByteModelsOrderInfo, Response);

