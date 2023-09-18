#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListGameRecords.h"
#include "DModelsListGameRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsListGameRecords, FAccelByteModelsListGameRecords, Response);

