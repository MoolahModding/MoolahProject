#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZTagEventActiveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZTagEventActiveDelegate, const FGameplayTag&, EventTag, bool, bActive);

