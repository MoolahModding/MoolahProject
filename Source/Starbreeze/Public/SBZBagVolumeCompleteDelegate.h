#pragma once
#include "CoreMinimal.h"
#include "SBZBagVolumeCompleteDelegate.generated.h"

class ASBZBagTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZBagVolumeComplete, ASBZBagTriggerVolume*, Volume);

