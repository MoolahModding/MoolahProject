#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetSessionAttributesResponse.h"
#include "DGetSessionAttributeResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDGetSessionAttributeResponse, FAccelByteModelsGetSessionAttributesResponse, Response);

