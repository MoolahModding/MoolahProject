#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCreatePartyResponse.h"
#include "DPartyCreateResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyCreateResponse, FAccelByteModelsCreatePartyResponse, Response);

