#pragma once
#include "CoreMinimal.h"
#include "SBZOnInfamyLevelChangedDynamicDelegate.generated.h"

class ASBZPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnInfamyLevelChangedDynamic, ASBZPlayerState*, PlayerState);

