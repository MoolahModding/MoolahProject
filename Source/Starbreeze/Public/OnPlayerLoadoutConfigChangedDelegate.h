#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerLoadoutConfig.h"
#include "OnPlayerLoadoutConfigChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerLoadoutConfigChanged, const FSBZPlayerLoadoutConfig&, PlayerLoadout, int32, PlayerLoadoutIndex);

