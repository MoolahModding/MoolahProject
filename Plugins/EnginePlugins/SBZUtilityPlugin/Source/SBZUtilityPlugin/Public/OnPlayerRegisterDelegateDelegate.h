#pragma once
#include "CoreMinimal.h"
#include "OnPlayerRegisterDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRegisterDelegate, APlayerState*, PlayerState);

