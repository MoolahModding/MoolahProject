#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCChannelResponse.h"
#include "DModelsUGCChannelResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCChannelResponse, FAccelByteModelsUGCChannelResponse, Response);

