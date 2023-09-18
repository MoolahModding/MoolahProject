#pragma once
#include "CoreMinimal.h"
#include "OnCircularWidgetSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCircularWidgetSelected, int32, SelectedIndex);

