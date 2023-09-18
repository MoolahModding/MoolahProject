#pragma once
#include "CoreMinimal.h"
#include "ESBZKickingError.h"
#include "OnKickFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKickFailed, ESBZKickingError, KickingError);

