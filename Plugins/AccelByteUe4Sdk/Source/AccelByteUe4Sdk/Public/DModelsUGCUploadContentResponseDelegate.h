#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCUploadContentURLResponseV2.h"
#include "DModelsUGCUploadContentResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCUploadContentResponse, FAccelByteModelsUGCUploadContentURLResponseV2, Response);

