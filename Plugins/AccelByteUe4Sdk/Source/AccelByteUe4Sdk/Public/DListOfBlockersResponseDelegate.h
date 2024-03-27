#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListBlockerResponse.h"
#include "DListOfBlockersResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDListOfBlockersResponse, FAccelByteModelsListBlockerResponse, Response);

