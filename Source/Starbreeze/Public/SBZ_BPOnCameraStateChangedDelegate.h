#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraState.h"
#include "SBZ_BPOnCameraStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZ_BPOnCameraStateChanged, ESBZCameraState, OldState, ESBZCameraState, NewState);

