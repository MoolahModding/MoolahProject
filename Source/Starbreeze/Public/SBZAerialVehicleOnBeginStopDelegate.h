#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnBeginStopDelegate.generated.h"

class ASBZAerialVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAerialVehicleOnBeginStop, ASBZAerialVehicle*, Vehicle);

