#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetAllSessionAttributesResponse.h"
#include "DGetAllSessionAttributeResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDGetAllSessionAttributeResponse, FAccelByteModelsGetAllSessionAttributesResponse, Response);

