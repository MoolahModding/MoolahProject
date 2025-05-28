#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPagedOrderInfo.h"
#include "DAccelByteModelsPagedOrderInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsPagedOrderInfoResponse, FAccelByteModelsPagedOrderInfo, Response);

