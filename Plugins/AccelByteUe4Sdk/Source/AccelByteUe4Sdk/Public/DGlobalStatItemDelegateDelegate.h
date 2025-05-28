#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalStatItemValueResponse.h"
#include "DGlobalStatItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDGlobalStatItemDelegate, FAccelByteModelsGlobalStatItemValueResponse, Response);

