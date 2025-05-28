#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRankingDataV3.h"
#include "DModelsUserRankingDataV3Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserRankingDataV3, FAccelByteModelsUserRankingDataV3, Response);

