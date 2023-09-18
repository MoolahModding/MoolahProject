#pragma once
#include "CoreMinimal.h"
#include "EPD3MiniGameState.h"
#include "SBZOnMiniGameInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnMiniGameInteraction, EPD3MiniGameState, OldState, EPD3MiniGameState, NewState, bool, bInIsLocallyControlled);

