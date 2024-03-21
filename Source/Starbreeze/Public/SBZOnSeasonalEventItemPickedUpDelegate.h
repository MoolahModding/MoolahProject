#pragma once
#include "CoreMinimal.h"
#include "SBZOnSeasonalEventItemPickedUpDelegate.generated.h"

class ASBZSeasonalEventItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSeasonalEventItemPickedUp, ASBZSeasonalEventItemBase*, SeasonalEventItem);

