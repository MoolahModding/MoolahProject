#pragma once
#include "CoreMinimal.h"
#include "PD3NegotiationEndTimeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPD3NegotiationEndTimeChanged, float, OldTime, float, NewTime);

