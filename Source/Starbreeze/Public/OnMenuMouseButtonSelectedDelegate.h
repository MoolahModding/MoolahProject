#pragma once
#include "CoreMinimal.h"
#include "OnMenuMouseButtonSelectedDelegate.generated.h"

class USBZMenuMouseButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuMouseButtonSelected, USBZMenuMouseButton*, Button);

