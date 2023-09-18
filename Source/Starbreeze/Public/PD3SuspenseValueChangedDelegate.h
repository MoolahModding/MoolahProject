#pragma once
#include "CoreMinimal.h"
#include "PD3SuspenseValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPD3SuspenseValueChanged, uint8, NewValue);

