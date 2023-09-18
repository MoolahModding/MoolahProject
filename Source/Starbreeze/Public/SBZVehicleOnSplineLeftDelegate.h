#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleOnSplineLeftDelegate.generated.h"

class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZVehicleOnSplineLeft, ASBZSpline*, Spline);

