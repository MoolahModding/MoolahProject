#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCPreview.h"
#include "DModelsUGCPreviewResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCPreviewResponse, FAccelByteModelsUGCPreview, Response);

