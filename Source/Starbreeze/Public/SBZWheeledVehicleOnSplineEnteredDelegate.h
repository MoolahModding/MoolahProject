#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnSplineEnteredDelegate.generated.h"

class ASBZSpline;
class ASBZWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZWheeledVehicleOnSplineEntered, ASBZWheeledVehicle*, Vehicle, ASBZSpline*, Spline);

