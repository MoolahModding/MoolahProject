#pragma once
#include "CoreMinimal.h"
#include "SBZOnFullscreenVideoActiveChangedDelegateDelegate.generated.h"

class USBZFullscreenVideoWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnFullscreenVideoActiveChangedDelegate, USBZFullscreenVideoWidget*, InWidget, bool, bInIsActive);

