#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsKickPartyMemberResponse.h"
#include "DPartyKickResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyKickResponse, FAccelByteModelsKickPartyMemberResponse, Response);

