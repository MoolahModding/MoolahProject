#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveStartedDelegate.generated.h"

class USBZHoldOutObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZHoldOutObjectiveStarted, USBZHoldOutObjectiveBase*, Objective, const FGameplayTag&, EventTag);

