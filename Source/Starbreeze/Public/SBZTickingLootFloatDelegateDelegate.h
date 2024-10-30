#pragma once
#include "CoreMinimal.h"
#include "SBZTickingLootFloatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZTickingLootFloatDelegate, float, Value);

