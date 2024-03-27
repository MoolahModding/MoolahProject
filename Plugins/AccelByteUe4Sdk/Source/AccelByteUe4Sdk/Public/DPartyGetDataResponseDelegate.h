#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyData.h"
#include "DPartyGetDataResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyGetDataResponse, FAccelByteModelsPartyData, Response);

