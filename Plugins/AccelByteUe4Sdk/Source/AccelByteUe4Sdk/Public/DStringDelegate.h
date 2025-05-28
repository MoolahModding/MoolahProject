#pragma once
#include "CoreMinimal.h"
#include "DStringDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDString, const FString&, Response);

