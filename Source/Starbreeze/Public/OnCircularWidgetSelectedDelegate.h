#pragma once
#include "CoreMinimal.h"
#include "OnCircularWidgetSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCircularWidgetSelected, int32, SelectedIndex);

