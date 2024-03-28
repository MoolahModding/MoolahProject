#pragma once
#include "CoreMinimal.h"
#include "OnMenuMouseButtonStateChangedDelegate.generated.h"

class USBZMenuMouseButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuMouseButtonStateChanged, USBZMenuMouseButton*, Button, bool, bIsEnabled);

