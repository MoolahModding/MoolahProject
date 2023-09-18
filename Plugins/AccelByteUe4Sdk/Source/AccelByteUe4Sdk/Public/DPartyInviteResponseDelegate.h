#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyInviteResponse.h"
#include "DPartyInviteResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyInviteResponse, FAccelByteModelsPartyInviteResponse, Response);

