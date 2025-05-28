#pragma once
#include "CoreMinimal.h"
#include "JwkSet.h"
#include "DJwkSetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDJwkSetDelegate, FJwkSet, Response);

