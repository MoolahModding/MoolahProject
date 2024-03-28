#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalStatItemValueResponse.h"
#include "DModelsGlobalStatItemDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsGlobalStatItemDelegate, FAccelByteModelsGlobalStatItemValueResponse, Response);

