#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyDeleteCodeResponse.h"
#include "DPartyDeleteCodeResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyDeleteCodeResponse, FAccelByteModelsPartyDeleteCodeResponse, Response);

