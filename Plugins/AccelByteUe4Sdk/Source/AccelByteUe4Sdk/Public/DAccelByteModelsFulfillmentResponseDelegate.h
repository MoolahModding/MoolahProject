#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFulfillmentResult.h"
#include "DAccelByteModelsFulfillmentResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsFulfillmentResponse, FAccelByteModelsFulfillmentResult, Response);

