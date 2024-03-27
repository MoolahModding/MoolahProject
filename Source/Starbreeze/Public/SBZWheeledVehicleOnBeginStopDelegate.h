#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnBeginStopDelegate.generated.h"

class ASBZWheeledVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZWheeledVehicleOnBeginStop, ASBZWheeledVehicle*, Vehicle);

