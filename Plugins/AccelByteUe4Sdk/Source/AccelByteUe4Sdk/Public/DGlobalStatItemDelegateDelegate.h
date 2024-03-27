#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalStatItemValueResponse.h"
#include "DGlobalStatItemDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDGlobalStatItemDelegate, FAccelByteModelsGlobalStatItemValueResponse, Response);

