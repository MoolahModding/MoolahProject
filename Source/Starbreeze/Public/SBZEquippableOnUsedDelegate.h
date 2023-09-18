#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableOnUsedDelegate.generated.h"

class ASBZEquippable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZEquippableOnUsed, const ASBZEquippable*, Equippable);

