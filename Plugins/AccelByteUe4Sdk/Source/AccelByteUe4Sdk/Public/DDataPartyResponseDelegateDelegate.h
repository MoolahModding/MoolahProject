#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDataPartyResponse.h"
#include "DDataPartyResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDDataPartyResponseDelegate, FAccelByteModelsDataPartyResponse, Response);

