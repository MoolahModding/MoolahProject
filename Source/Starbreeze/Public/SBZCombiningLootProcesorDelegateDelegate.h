#pragma once
#include "CoreMinimal.h"
#include "SBZCombiningLootProcesorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZCombiningLootProcesorDelegate, bool, bIsCombinedBag);

