#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsKickPartyMemberResponse.h"
#include "DPartyKickResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyKickResponse, FAccelByteModelsKickPartyMemberResponse, Response);

