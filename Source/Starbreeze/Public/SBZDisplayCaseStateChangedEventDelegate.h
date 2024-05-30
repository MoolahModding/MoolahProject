#pragma once
#include "CoreMinimal.h"
#include "ESBZDisplayCaseState.h"
#include "SBZDisplayCaseStateChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZDisplayCaseStateChangedEvent, ESBZDisplayCaseState, NewState);

