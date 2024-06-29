#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnSplineEndReachedDelegate.generated.h"

class ASBZSpline;
class ASBZWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZWheeledVehicleOnSplineEndReached, ASBZWheeledVehicle*, Vehicle, ASBZSpline*, Spline);

