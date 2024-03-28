#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnStoppedDelegate.generated.h"

class ASBZWheeledVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZWheeledVehicleOnStopped, ASBZWheeledVehicle*, Vehicle);

