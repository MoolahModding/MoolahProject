#pragma once
#include "CoreMinimal.h"
#include "SBZOnFullscreenVideoActiveChangedDelegateDelegate.generated.h"

class USBZFullscreenVideoWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnFullscreenVideoActiveChangedDelegate, USBZFullscreenVideoWidget*, InWidget, bool, bInIsActive);

