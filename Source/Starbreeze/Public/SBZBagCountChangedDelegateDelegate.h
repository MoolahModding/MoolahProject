#pragma once
#include "CoreMinimal.h"
#include "SBZBagCountChangedDelegateDelegate.generated.h"

class ASBZBagTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZBagCountChangedDelegate, ASBZBagTriggerVolume*, Volume, int32, Overlapping, int32, Secured);

