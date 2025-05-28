#pragma once
#include "CoreMinimal.h"
#include "SBZOnStackFocusGainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnStackFocusGained, const FName, OldStackValue);

