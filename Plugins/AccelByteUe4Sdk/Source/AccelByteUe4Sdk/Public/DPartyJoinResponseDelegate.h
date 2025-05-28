#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyJoinResponse.h"
#include "DPartyJoinResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyJoinResponse, FAccelByteModelsPartyJoinResponse, Response);

