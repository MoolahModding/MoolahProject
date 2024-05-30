#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveProgressChangedDelegate.generated.h"

class USBZHoldOutObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZHoldOutObjectiveProgressChanged, USBZHoldOutObjectiveBase*, Objective, float, OldProgress, float, NewProgress, const FGameplayTag&, EventTag);

