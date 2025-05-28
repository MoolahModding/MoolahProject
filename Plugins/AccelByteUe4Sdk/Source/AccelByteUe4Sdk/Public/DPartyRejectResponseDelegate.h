#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyRejectResponse.h"
#include "DPartyRejectResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyRejectResponse, FAccelByteModelsPartyRejectResponse, Response);

