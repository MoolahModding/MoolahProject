#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCContentResponse.h"
#include "DModelsUGCContentResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCContentResponse, FAccelByteModelsUGCContentResponse, Response);

