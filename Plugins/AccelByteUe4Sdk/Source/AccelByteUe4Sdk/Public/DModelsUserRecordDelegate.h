#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRecord.h"
#include "DModelsUserRecordDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserRecord, FAccelByteModelsUserRecord, Response);

