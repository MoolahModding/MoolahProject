#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnStoppedDelegate.generated.h"

class ASBZWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZWheeledVehicleOnStopped, ASBZWheeledVehicle*, Vehicle);

