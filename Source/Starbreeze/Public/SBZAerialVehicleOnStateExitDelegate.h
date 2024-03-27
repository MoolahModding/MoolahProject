#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnStateExitDelegate.generated.h"

class ASBZAerialVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZAerialVehicleOnStateExit, ASBZAerialVehicle*, Vehicle, FName, State);

