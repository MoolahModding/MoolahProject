#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyGetCodeResponse.h"
#include "DPartyGetCodeResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyGetCodeResponse, FAccelByteModelsPartyGetCodeResponse, Response);

