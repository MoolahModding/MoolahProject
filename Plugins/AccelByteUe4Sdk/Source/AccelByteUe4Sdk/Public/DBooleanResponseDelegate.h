#pragma once
#include "CoreMinimal.h"
#include "DBooleanResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDBooleanResponse, bool, Response);

