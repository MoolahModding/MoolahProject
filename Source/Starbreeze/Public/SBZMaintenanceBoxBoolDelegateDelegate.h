#pragma once
#include "CoreMinimal.h"
#include "SBZMaintenanceBoxBoolDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZMaintenanceBoxBoolDelegate, bool, bSuccessful);

