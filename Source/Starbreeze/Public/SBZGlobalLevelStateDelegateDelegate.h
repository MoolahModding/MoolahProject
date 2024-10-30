#pragma once
#include "CoreMinimal.h"
#include "SBZGlobalLevelStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZGlobalLevelStateDelegate, int32, OldState, int32, NewState, bool, bDoCosmetics);

