#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQueryReward.h"
#include "DModelsQueryRewardDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsQueryReward, FAccelByteModelsQueryReward, Response);

