#pragma once
#include "CoreMinimal.h"
#include "ESBZTickingLootType.h"
#include "SBZTickingLootTypeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZTickingLootTypeDelegate, ESBZTickingLootType, Type);

