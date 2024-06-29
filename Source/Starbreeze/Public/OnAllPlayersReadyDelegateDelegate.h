#pragma once
#include "CoreMinimal.h"
#include "EBlackScreenTransitionType.h"
#include "OnAllPlayersReadyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllPlayersReadyDelegate, EBlackScreenTransitionType, BlackScreenTransitionType);

