#pragma once
#include "CoreMinimal.h"
#include "SBZAerialVehicleOnDoorStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZAerialVehicleOnDoorStateChanged, uint8, NewState, uint8, OldState);

