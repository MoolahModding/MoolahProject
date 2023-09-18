#pragma once
#include "CoreMinimal.h"
#include "SBZOnActiveLoadoutIndexChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnActiveLoadoutIndexChanged, int32, ActiveLoadoutIndex);

