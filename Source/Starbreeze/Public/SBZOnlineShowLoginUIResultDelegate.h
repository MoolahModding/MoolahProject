#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineShowLoginUIResultDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnlineShowLoginUIResult, APlayerController*, PlayerController);

