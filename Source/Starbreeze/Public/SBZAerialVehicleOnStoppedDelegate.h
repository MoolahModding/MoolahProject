#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnStoppedDelegate.generated.h"

class ASBZAerialVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAerialVehicleOnStopped, ASBZAerialVehicle*, Vehicle);

