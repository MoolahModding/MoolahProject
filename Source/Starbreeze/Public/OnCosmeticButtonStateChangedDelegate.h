#pragma once
#include "CoreMinimal.h"
#include "OnCosmeticButtonStateChangedDelegate.generated.h"

class USBZMainMenuCosmeticItemButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCosmeticButtonStateChanged, USBZMainMenuCosmeticItemButton*, CosmeticButton, bool, bIsEnabled);

