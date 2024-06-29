#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveProgressChangedDelegate.generated.h"

class USBZHoldOutObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSBZHoldOutObjectiveProgressChanged, USBZHoldOutObjectiveBase*, Objective, int32, OldProgressCount, int32, NewProgressCount, const FGameplayTagContainer&, EventTag, const FGameplayTagContainer&, RemovedTags);

