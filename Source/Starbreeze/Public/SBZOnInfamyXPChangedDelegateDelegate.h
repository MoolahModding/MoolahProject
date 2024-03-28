#pragma once
#include "CoreMinimal.h"
#include "SBZOnInfamyXPChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnInfamyXPChangedDelegate, int32, NewXP, int32, PreviousXP);

