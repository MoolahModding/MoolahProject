#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkStatItemOperationResult.h"
#include "DArrayBulkStatItemOperationDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDArrayBulkStatItemOperationDelegate, TArray<FAccelByteModelsBulkStatItemOperationResult>, Response);

