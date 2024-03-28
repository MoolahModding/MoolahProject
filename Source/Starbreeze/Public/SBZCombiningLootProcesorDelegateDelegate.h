#pragma once
#include "CoreMinimal.h"
#include "SBZCombiningLootProcesorDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZCombiningLootProcesorDelegate, bool, bIsCombinedBag);

