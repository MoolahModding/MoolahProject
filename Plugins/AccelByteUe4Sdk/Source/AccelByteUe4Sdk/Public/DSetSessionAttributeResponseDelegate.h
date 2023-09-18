#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSetSessionAttributesResponse.h"
#include "DSetSessionAttributeResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSetSessionAttributeResponse, FAccelByteModelsSetSessionAttributesResponse, Response);

