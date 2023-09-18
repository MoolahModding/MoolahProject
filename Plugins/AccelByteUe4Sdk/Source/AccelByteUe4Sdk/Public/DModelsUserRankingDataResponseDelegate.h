#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRankingData.h"
#include "DModelsUserRankingDataResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserRankingDataResponse, FAccelByteModelsUserRankingData, Response);

