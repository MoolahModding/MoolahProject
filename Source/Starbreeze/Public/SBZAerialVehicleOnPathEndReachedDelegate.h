#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnPathEndReachedDelegate.generated.h"

class ASBZAerialVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAerialVehicleOnPathEndReached, ASBZAerialVehicle*, Vehicle);

