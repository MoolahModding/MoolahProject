#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserSeasonInfo.h"
#include "DModelsUserSeasonInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserSeasonInfo, FAccelByteModelsUserSeasonInfo, Response);

