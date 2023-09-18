#pragma once
#include "CoreMinimal.h"
#include "OnPlayableLevelInitializedDelegateDelegate.generated.h"

class UWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayableLevelInitializedDelegate, UWorld*, World);

