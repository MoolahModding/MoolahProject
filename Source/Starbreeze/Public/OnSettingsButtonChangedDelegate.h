#pragma once
#include "CoreMinimal.h"
#include "OnSettingsButtonChangedDelegate.generated.h"

class USBZSettingsButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsButtonChanged, USBZSettingsButton*, Button);

