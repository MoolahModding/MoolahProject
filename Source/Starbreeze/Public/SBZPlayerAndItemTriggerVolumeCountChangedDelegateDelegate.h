#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate.generated.h"

class ASBZBagItem;
class ASBZCharacter;
class ASBZPlayerAndItemTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSBZPlayerAndItemTriggerVolumeCountChangedDelegate, ASBZPlayerAndItemTriggerVolume*, Volume, int32, OldPlayerCount, const TArray<ASBZCharacter*>&, OverlappingPlayerArray, int32, OldItemCount, const TArray<ASBZBagItem*>&, OverlappingBagArray);

