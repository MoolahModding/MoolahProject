#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameBinaryRecord.h"
#include "DModelsGameBinaryRecordDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsGameBinaryRecord, FAccelByteModelsGameBinaryRecord, Response);

