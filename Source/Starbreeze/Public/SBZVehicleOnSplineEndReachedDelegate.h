#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleOnSplineEndReachedDelegate.generated.h"

class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZVehicleOnSplineEndReached, ASBZSpline*, Spline);

