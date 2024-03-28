#pragma once
#include "CoreMinimal.h"
#include "OnPlatformUserLoginChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlatformUserLoginChangedDelegate, bool, bLoggedIn);

