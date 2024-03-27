#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnPathEndReachedDelegate.generated.h"

class ASBZWheeledVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZWheeledVehicleOnPathEndReached, ASBZWheeledVehicle*, Vehicle);

