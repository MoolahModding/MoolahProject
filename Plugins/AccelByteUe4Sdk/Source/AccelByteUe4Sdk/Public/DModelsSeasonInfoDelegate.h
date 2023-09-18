#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSeasonInfo.h"
#include "DModelsSeasonInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSeasonInfo, FAccelByteModelsSeasonInfo, Response);

