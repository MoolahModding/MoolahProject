#pragma once
#include "CoreMinimal.h"
#include "OnItemButtonSelectedDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemButtonSelected, const USBZInventoryBaseData*, ActiveItemData);

