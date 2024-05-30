#pragma once
#include "CoreMinimal.h"
#include "OnMenuButtonSelectedDelegate.generated.h"

class USBZMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuButtonSelected, USBZMenuButton*, Button);

