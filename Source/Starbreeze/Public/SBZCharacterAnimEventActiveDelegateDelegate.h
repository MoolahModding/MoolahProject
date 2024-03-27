#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZCharacterAnimEventActiveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZCharacterAnimEventActiveDelegate, const FGameplayTag&, EventTag, bool, bActive);

