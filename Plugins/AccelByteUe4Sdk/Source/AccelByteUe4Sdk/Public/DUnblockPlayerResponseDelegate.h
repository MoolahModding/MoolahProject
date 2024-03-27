#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnblockPlayerResponse.h"
#include "DUnblockPlayerResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDUnblockPlayerResponse, FAccelByteModelsUnblockPlayerResponse, Response);

