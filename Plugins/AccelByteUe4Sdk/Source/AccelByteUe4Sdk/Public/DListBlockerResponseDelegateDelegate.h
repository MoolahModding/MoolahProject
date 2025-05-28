#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListBlockerResponse.h"
#include "DListBlockerResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDListBlockerResponseDelegate, FAccelByteModelsListBlockerResponse, Response);

