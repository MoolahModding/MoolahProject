#pragma once
#include "CoreMinimal.h"
#include "DArrayUint8Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDArrayUint8, TArray<uint8>, Response);

