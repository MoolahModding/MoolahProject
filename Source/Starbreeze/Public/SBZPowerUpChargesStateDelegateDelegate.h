#pragma once
#include "CoreMinimal.h"
#include "ESBZPowerUpChargesState.h"
#include "SBZPowerUpChargesStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZPowerUpChargesStateDelegate, ESBZPowerUpChargesState, OldState, ESBZPowerUpChargesState, NewState);

