#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnSplineLeftDelegate.generated.h"

class ASBZAerialVehicle;
class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZAerialVehicleOnSplineLeft, ASBZAerialVehicle*, Vehicle, ASBZSpline*, Spline);

