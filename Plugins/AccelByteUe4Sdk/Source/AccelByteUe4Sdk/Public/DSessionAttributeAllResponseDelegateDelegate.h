#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetSessionAttributeAllResponse.h"
#include "DSessionAttributeAllResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSessionAttributeAllResponseDelegate, FAccelByteModelsGetSessionAttributeAllResponse, Response);

