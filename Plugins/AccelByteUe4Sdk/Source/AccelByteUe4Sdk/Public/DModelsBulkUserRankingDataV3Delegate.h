#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkUserRankingDataV3.h"
#include "DModelsBulkUserRankingDataV3Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsBulkUserRankingDataV3, FAccelByteModelsBulkUserRankingDataV3, Response);

