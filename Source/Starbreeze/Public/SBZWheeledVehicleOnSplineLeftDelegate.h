#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnSplineLeftDelegate.generated.h"

class ASBZSpline;
class ASBZWheeledVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZWheeledVehicleOnSplineLeft, ASBZWheeledVehicle*, Vehicle, ASBZSpline*, Spline);

