#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMetaRequestResult.h"
#include "OnMetaRequestResultAndItemIdBluePrintDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMetaRequestResultAndItemIdBluePrintDelegate, ESBZMetaRequestResult, Result, FGuid, Guid);

