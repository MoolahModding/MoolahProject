#pragma once
#include "CoreMinimal.h"
#include "OnGameStateReceivedDelegate.generated.h"

class AGameStateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStateReceived, AGameStateBase*, GameState);

