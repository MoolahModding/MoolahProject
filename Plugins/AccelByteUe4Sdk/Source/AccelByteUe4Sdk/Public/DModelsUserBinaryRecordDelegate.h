#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserBinaryRecord.h"
#include "DModelsUserBinaryRecordDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserBinaryRecord, FAccelByteModelsUserBinaryRecord, Response);

