#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsStatItemValueResponse.h"
#include "DFetchUserStatisticDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDFetchUserStatistic, TArray<FAccelByteModelsStatItemValueResponse>, Response);

