#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCategoryInfo.h"
#include "DModelsCategoryInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsCategoryInfoResponse, FAccelByteModelsCategoryInfo, Response);

