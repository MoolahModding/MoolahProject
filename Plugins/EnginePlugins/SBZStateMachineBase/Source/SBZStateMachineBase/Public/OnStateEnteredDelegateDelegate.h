#pragma once
#include "CoreMinimal.h"
#include "OnStateEnteredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateEnteredDelegate, FName, StateName);

