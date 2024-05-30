#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnStateEnteredDelegate.generated.h"

class ASBZAerialVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZAerialVehicleOnStateEntered, ASBZAerialVehicle*, Vehicle, FName, State);

