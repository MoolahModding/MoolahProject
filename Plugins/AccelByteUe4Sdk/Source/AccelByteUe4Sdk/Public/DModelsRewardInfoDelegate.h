#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRewardInfo.h"
#include "DModelsRewardInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsRewardInfo, FAccelByteModelsRewardInfo, Response);

