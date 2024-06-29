#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnSplineEnteredDelegate.generated.h"

class ASBZAerialVehicle;
class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZAerialVehicleOnSplineEntered, ASBZAerialVehicle*, Vehicle, ASBZSpline*, Spline);

