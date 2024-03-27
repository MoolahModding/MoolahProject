#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsStatItemValueResponse.h"
#include "DModelsStatItemValueResponsesDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsStatItemValueResponses, TArray<FAccelByteModelsStatItemValueResponse>, Response);

