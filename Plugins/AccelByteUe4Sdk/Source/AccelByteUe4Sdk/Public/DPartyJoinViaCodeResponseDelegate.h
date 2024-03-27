#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyJoinResponse.h"
#include "DPartyJoinViaCodeResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyJoinViaCodeResponse, FAccelByteModelsPartyJoinResponse, Response);

