#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableOnDroppedDelegate.generated.h"

class ASBZEquippable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZEquippableOnDropped, const ASBZEquippable*, Equippable);

