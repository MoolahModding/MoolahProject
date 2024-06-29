#pragma once
#include "CoreMinimal.h"
#include "SBZOnKeyItemCountChangedDelegateDelegate.generated.h"

class UPD3KeyItemContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnKeyItemCountChangedDelegate, UPD3KeyItemContainer*, InContainer);

