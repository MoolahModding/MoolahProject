#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsInfoPartyResponse.h"
#include "DInfoPartyResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDInfoPartyResponse, FAccelByteModelsInfoPartyResponse, Response);

