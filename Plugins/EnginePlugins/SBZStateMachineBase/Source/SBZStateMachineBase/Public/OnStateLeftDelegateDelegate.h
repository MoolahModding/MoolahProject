#pragma once
#include "CoreMinimal.h"
#include "OnStateLeftDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateLeftDelegate, FName, StateName);

