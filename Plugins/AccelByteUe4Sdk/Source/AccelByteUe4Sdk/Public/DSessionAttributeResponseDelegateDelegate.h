#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetSessionAttributeResponse.h"
#include "DSessionAttributeResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSessionAttributeResponseDelegate, FAccelByteModelsGetSessionAttributeResponse, Response);

