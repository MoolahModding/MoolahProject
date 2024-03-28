#pragma once
#include "CoreMinimal.h"
#include "OnMontageInstanceEndedMCDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageInstanceEndedMCDelegate, int32, MontageInstanceID, bool, bInterrupted);

