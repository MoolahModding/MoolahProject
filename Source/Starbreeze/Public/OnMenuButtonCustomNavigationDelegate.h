#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "OnMenuButtonCustomNavigationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuButtonCustomNavigation, EUINavigation, ButtonNavigation);

