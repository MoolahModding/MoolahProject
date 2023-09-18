#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnblockPlayerResponse.h"
#include "DUnblockPlayerResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUnblockPlayerResponse, FAccelByteModelsUnblockPlayerResponse, Response);

