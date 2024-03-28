#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSetSessionAttributesResponse.h"
#include "DSetSessionAttributeResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDSetSessionAttributeResponse, FAccelByteModelsSetSessionAttributesResponse, Response);

