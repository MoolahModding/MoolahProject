#pragma once
#include "CoreMinimal.h"
#include "SBZBagHandle.h"
#include "SBZBagEnteredDelegateDelegate.generated.h"

class ASBZBagItem;
class ASBZBagTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZBagEnteredDelegate, ASBZBagTriggerVolume*, Volume, ASBZBagItem*, Bag, FSBZBagHandle, Handle);

