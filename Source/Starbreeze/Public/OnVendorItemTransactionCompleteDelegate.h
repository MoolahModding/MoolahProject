#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "OnVendorItemTransactionCompleteDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVendorItemTransactionComplete, ESBZMetaRequestResult, MetaRequestResult, const USBZInventoryBaseData*, Item);

