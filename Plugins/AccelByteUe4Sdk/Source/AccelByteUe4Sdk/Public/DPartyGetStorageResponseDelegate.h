#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyDataNotif.h"
#include "DPartyGetStorageResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyGetStorageResponse, FAccelByteModelsPartyDataNotif, Response);

