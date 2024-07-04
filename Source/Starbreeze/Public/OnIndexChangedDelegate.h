#pragma once
#include "CoreMinimal.h"
#include "OnIndexChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIndexChanged, int32, NewIndex);

