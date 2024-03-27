#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDataPartyResponse.h"
#include "DDataPartyResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDDataPartyResponseDelegate, FAccelByteModelsDataPartyResponse, Response);

