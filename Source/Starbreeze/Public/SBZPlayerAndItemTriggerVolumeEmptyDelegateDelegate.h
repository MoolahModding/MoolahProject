#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate.generated.h"

class ASBZPlayerAndItemTriggerVolume;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZPlayerAndItemTriggerVolumeEmptyDelegate, ASBZPlayerAndItemTriggerVolume*, Volume, bool, bIsInitialCheck);

