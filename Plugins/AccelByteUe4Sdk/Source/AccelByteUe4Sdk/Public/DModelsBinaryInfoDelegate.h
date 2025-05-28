#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBinaryInfo.h"
#include "DModelsBinaryInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsBinaryInfo, FAccelByteModelsBinaryInfo, Response);

