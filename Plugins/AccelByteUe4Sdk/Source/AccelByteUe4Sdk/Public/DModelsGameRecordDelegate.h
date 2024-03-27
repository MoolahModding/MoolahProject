#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameRecord.h"
#include "DModelsGameRecordDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsGameRecord, FAccelByteModelsGameRecord, Response);

