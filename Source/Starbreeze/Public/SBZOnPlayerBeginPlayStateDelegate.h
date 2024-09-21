#pragma once
#include "CoreMinimal.h"
#include "SBZOnPlayerBeginPlayStateDelegate.generated.h"

class ASBZPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPlayerBeginPlayState, ASBZPlayerController*, PlayerController);

