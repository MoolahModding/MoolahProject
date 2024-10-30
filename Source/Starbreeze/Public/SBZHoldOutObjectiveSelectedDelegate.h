#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveSelectedDelegate.generated.h"

class USBZHoldOutObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZHoldOutObjectiveSelected, USBZHoldOutObjectiveBase*, Objective, const FGameplayTagContainer&, GrantedTags, const FGameplayTagContainer&, RemovedTags);

