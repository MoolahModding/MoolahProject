#pragma once
#include "CoreMinimal.h"
#include "DConnectionClosedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDConnectionClosedDelegate, int32, StatusCode, const FString&, Reason, bool, bWasClean);

