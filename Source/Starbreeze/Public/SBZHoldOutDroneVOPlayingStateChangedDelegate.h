#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutDroneVOPlayingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZHoldOutDroneVOPlayingStateChanged, bool, bIsPlaying);

