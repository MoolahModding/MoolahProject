#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLoadoutSlot.h"
#include "OnActiveItemChangedDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveItemChanged, ESBZItemLoadoutSlot, ItemSlot, const USBZInventoryBaseData*, ActiveItem);

