#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLeavePartyResponse.h"
#include "DLeavePartyResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDLeavePartyResponse, FAccelByteModelsLeavePartyResponse, Response);

