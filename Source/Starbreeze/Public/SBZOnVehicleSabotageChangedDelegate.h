#pragma once
#include "CoreMinimal.h"
#include "SBZOnVehicleSabotageChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnVehicleSabotageChanged, bool, bSabotaged);

