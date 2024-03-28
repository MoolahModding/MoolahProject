#pragma once
#include "CoreMinimal.h"
#include "SBZOnVehicleEscortChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnVehicleEscortChanged, bool, bIsMoving);

