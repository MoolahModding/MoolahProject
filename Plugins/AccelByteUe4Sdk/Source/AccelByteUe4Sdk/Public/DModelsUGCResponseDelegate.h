#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCResponse.h"
#include "DModelsUGCResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCResponse, FAccelByteModelsUGCResponse, Response);

