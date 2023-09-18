#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSeasonClaimRewardResponse.h"
#include "DModelsSeasonClaimRewardResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSeasonClaimRewardResponse, FAccelByteModelsSeasonClaimRewardResponse, Response);

