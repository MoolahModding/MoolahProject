#pragma once
#include "CoreMinimal.h"
#include "SBZOnPlatformUserChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPlatformUserChangedDelegate, int32, OldUserIndex);

