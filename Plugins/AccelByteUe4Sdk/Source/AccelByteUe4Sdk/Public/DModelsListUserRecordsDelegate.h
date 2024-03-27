#pragma once
#include "CoreMinimal.h"
#include "ListAccelByteModelsUserRecord.h"
#include "DModelsListUserRecordsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsListUserRecords, FListAccelByteModelsUserRecord, Response);

