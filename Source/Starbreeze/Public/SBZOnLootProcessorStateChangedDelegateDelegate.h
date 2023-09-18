#pragma once
#include "CoreMinimal.h"
#include "ESBZLootProcessorState.h"
#include "SBZOnLootProcessorStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnLootProcessorStateChangedDelegate, ESBZLootProcessorState, NewState);

