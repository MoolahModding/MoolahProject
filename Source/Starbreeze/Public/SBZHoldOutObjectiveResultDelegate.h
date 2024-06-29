#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZHoldOutObjectiveResult.h"
#include "SBZHoldOutObjectiveResultDelegate.generated.h"

class USBZHoldOutObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZHoldOutObjectiveResult, const ESBZHoldOutObjectiveResult, Result, USBZHoldOutObjectiveBase*, Objective, const FGameplayTagContainer&, GrantedTags, const FGameplayTagContainer&, RemovedTags);

