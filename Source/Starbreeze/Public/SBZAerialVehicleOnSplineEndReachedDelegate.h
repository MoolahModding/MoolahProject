#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnSplineEndReachedDelegate.generated.h"

class ASBZAerialVehicle;
class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZAerialVehicleOnSplineEndReached, ASBZAerialVehicle*, Vehicle, ASBZSpline*, Spline);

