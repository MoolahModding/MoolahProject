#pragma once
#include "CoreMinimal.h"
#include "SBZBagAndItemTriggerDelegateDelegate.generated.h"

class ASBZCharacter;
class USBZBagType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZBagAndItemTriggerDelegate, ASBZCharacter*, Character, const USBZBagType*, BagType);

