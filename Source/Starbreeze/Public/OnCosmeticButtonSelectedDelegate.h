#pragma once
#include "CoreMinimal.h"
#include "OnCosmeticButtonSelectedDelegate.generated.h"

class USBZMainMenuCosmeticItemButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCosmeticButtonSelected, USBZMainMenuCosmeticItemButton*, CosmeticButton);

